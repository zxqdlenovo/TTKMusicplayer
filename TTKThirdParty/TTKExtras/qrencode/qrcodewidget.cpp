#include "qrcodewidget.h"

#include <QPainter>
#include <QPaintEvent>

class QRCodeQWidgetPrivate : public TTKPrivate<QRCodeQWidget>
{
public:
    QRCodeQWidgetPrivate();

    bool m_casesen;
    int m_margin;
    QString m_iconPath;
    qreal m_percent;
    QByteArray m_text;
    QColor m_foreground, m_background;
    QRencodeMode m_mode;
    QRecLevel m_level;

};

QRCodeQWidgetPrivate::QRCodeQWidgetPrivate()
{
    m_margin = 10;
    m_foreground = QColor("black");
    m_background = QColor("white");
    m_casesen = true;
    m_mode = QR_MODE_8;
    m_level = QR_ECLEVEL_Q;
    m_percent = 0.23f;
}



QRCodeQWidget::QRCodeQWidget(const QByteArray &text, const QSize &size, QWidget *parent)
    : QWidget(parent)
{
    TTK_INIT_PRIVATE;
    TTK_D(QRCodeQWidget);
    if(text.isEmpty())
    {
        d->m_text = QByteArray("https://github.com/Greedysky/TTKMusicplayer");
    }
    else
    {
        d->m_text = text;
    }
    setFixedSize(size);

}

void QRCodeQWidget::setMargin(const int margin)
{
    TTK_D(QRCodeQWidget);
    d->m_margin = margin;
    update();
}

int QRCodeQWidget::getMargin() const
{
    TTK_D(QRCodeQWidget);
    return d->m_margin;
}

void QRCodeQWidget::setIcon(const QString &path, qreal percent)
{
    TTK_D(QRCodeQWidget);
    setIconPercent(percent);
    d->m_iconPath = path;
    update();
}

QString QRCodeQWidget::getIcon() const
{
    TTK_D(QRCodeQWidget);
    return d->m_iconPath;
}

void QRCodeQWidget::setIconPercent(qreal percent)
{
    TTK_D(QRCodeQWidget);
    d->m_percent = percent < 0.5 ? percent : 0.3;
}

qreal QRCodeQWidget::getIconPercent() const
{
    TTK_D(QRCodeQWidget);
    return d->m_percent;
}

void QRCodeQWidget::setCaseSensitive(bool flag)
{
    TTK_D(QRCodeQWidget);
    d->m_casesen = flag;
    update();
}

bool QRCodeQWidget::caseSensitive() const
{
    TTK_D(QRCodeQWidget);
    return d->m_casesen;
}

void QRCodeQWidget::setText(const QByteArray &text)
{
    TTK_D(QRCodeQWidget);
    d->m_text = text;
}

QByteArray QRCodeQWidget::getText() const
{
    TTK_D(QRCodeQWidget);
    return d->m_text;
}

void QRCodeQWidget::setForegroundColor(const QColor &color)
{
    TTK_D(QRCodeQWidget);
    d->m_foreground = color;
}

QColor QRCodeQWidget::getForegroundColor() const
{
    TTK_D(QRCodeQWidget);
    return d->m_foreground;
}

void QRCodeQWidget::setBackgroundColor(const QColor &color)
{
    TTK_D(QRCodeQWidget);
    d->m_background = color;
}

QColor QRCodeQWidget::getBackgroundColor() const
{
    TTK_D(QRCodeQWidget);
    return d->m_background;
}

void QRCodeQWidget::setMode(QRencodeMode mode)
{
    TTK_D(QRCodeQWidget);
    d->m_mode = mode;
}

QRencodeMode QRCodeQWidget::getMode() const
{
    TTK_D(QRCodeQWidget);
    return d->m_mode;
}

void QRCodeQWidget::setLevel(QRecLevel level)
{
    TTK_D(QRCodeQWidget);
    d->m_level = level;
}

QRecLevel QRCodeQWidget::getLevel() const
{
    TTK_D(QRCodeQWidget);
    return d->m_level;
}

void QRCodeQWidget::paintEvent(QPaintEvent *event)
{
    TTK_D(QRCodeQWidget);
    QWidget::paintEvent (event);
    QPainter painter(this);

    QRcode *qrcode = QRcode_encodeString(d->m_text.constData(), 7, d->m_level, d->m_mode, d->m_casesen);
    if(qrcode)
    {
        unsigned char *point = qrcode->data;
        painter.setPen(Qt::NoPen);
        painter.setBrush(d->m_background);
        painter.drawRect(0, 0, width(), height());

        const double scale = (width () - 2.0 * d->m_margin) / qrcode->width;
        painter.setBrush(d->m_foreground);

        for(int x=0; x<qrcode->width; ++x)
        {
            for(int y =0; y<qrcode->width; ++y)
            {
                if(*point & 1)
                {
                    QRectF r(d->m_margin + y * scale, d->m_margin + x * scale, scale, scale);
                    painter.drawRects(&r, 1);
                }
                ++point;
            }
        }
        point = nullptr;
        QRcode_free(qrcode);

        /// draw icon
        painter.setBrush(d->m_background);
        const double icon_width = (width () - 2.0 * d->m_margin) * d->m_percent;
        const double icon_height = icon_width;
        const double wrap_x = (width () - icon_width) / 2.0;
        const double wrap_y = (width () - icon_height) / 2.0;
        const QRectF wrap(wrap_x - 5, wrap_y - 5, icon_width + 10, icon_height + 10);
        painter.drawRoundRect(wrap, 50, 50);
        QPixmap image(d->m_iconPath);
        const QRectF target(wrap_x, wrap_y, icon_width, icon_height);
        const QRectF source(0, 0, image.width (), image.height ());
        painter.drawPixmap(target, image, source);
    }
    qrcode = nullptr;
    event->accept();
}
