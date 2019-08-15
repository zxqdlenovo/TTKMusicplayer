#include "musicroundanimationlabel.h"
#include "musicnumberdefine.h"

#include <QPainter>

MusicRoundAnimationLabel::MusicRoundAnimationLabel(QWidget *parent)
    : QWidget(parent)
{
    m_rotateAngle = 0;

    m_timer.setInterval(50);
    connect(&m_timer, SIGNAL(timeout()), SLOT(update()));
}

MusicRoundAnimationLabel::~MusicRoundAnimationLabel()
{
    stop();
}

void MusicRoundAnimationLabel::setPixmap(const QPixmap &pix)
{
    m_pixmap = pix;
}

void MusicRoundAnimationLabel::setInterval(int value)
{
    m_timer.setInterval(value);
}

void MusicRoundAnimationLabel::start()
{
    m_timer.start();
}

void MusicRoundAnimationLabel::stop()
{
    m_timer.stop();
}

void MusicRoundAnimationLabel::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);
    QPainter painter(this);

    const QSize &self = size();
    const QRect rotatedRect(-self.width()/2, -self.height()/2, self.width(), self.height());
    const int cx = self.width() / 2;
    const int cy = self.height() / 2;

    if(++m_rotateAngle >= MA_360)
    {
        m_rotateAngle -= MA_360;
    }

    painter.save();
    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    painter.translate(cx, cy);
    painter.rotate(m_rotateAngle);
    painter.drawPixmap(rotatedRect, m_pixmap);
    painter.restore();
}
