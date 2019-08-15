#include "musiclayoutanimationwidget.h"
#include "musicwidgetheaders.h"

#include <QPainter>
#include <QPropertyAnimation>

MusicLayoutAnimationWidget::MusicLayoutAnimationWidget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);

    m_mainWidget = new QWidget(this);
    mainLayout->addWidget(m_mainWidget);
    setLayout(mainLayout);

    m_widgetLayout = nullptr;

    m_isAnimating = false;
    m_currentValue = 0;

    m_animation = new QPropertyAnimation(m_mainWidget, QByteArray(), this);
    m_animation->setDuration(500);
    m_animation->setEasingCurve(QEasingCurve::Linear);
    m_animation->setStartValue(0.0f);
    m_animation->setEndValue(0.0f);
    connect(m_animation, SIGNAL(valueChanged(QVariant)), SLOT(valueChanged(QVariant)));
    connect(m_animation, SIGNAL(finished()), SLOT(animationFinished()));
}

MusicLayoutAnimationWidget::~MusicLayoutAnimationWidget()
{
    delete m_widgetLayout;
    delete m_mainWidget;
    delete m_animation;
}

void MusicLayoutAnimationWidget::start()
{
    if(m_isAnimating)
    {
        return;
    }

    m_animation->setStartValue(0);

    m_mainWidget->hide();
    m_isAnimating = true;
    m_animation->start();
}

void MusicLayoutAnimationWidget::stop()
{
    m_isAnimating = false;
    m_animation->stop();
    m_mainWidget->show();
}

void MusicLayoutAnimationWidget::connectTo(QObject *parent)
{
    connect(m_animation, SIGNAL(finished()), parent, SLOT(updateAnimationLrc()));
}

void MusicLayoutAnimationWidget::addStretch(int stretch)
{
    m_widgetLayout->addStretch(stretch);
}

void MusicLayoutAnimationWidget::addWidget(QWidget *widget, int stretch, Qt::Alignment alignment)
{
    m_widgetLayout->addWidget(widget, stretch, alignment);
}

void MusicLayoutAnimationWidget::removeWidget(QWidget *widget)
{
    m_widgetLayout->removeWidget(widget);
}

void MusicLayoutAnimationWidget::valueChanged(const QVariant &value)
{
    m_currentValue = -value.toFloat();
    update();
}

void MusicLayoutAnimationWidget::animationFinished()
{
    m_currentValue = 0;
    m_isAnimating = false;
    m_mainWidget->show();
}



MusicVLayoutAnimationWidget::MusicVLayoutAnimationWidget(QWidget *parent)
    : MusicLayoutAnimationWidget(parent)
{
    m_widgetLayout = new QVBoxLayout(m_mainWidget);
    m_widgetLayout->setContentsMargins(0, 0, 0, 0);
    m_widgetLayout->setSpacing(0);
    m_mainWidget->setLayout(m_widgetLayout);
}

void MusicVLayoutAnimationWidget::start()
{
    if(m_isAnimating)
    {
        return;
    }

    m_animation->setEndValue(height()/m_widgetLayout->count());

    MusicLayoutAnimationWidget::start();
}

void MusicVLayoutAnimationWidget::paintEvent(QPaintEvent * event)
{
    if(m_isAnimating)
    {
        QPainter painter(this);
        QPixmap pixmap( size() );
        pixmap.fill(Qt::transparent);
        m_mainWidget->setAttribute(Qt::WA_TranslucentBackground, true);
        m_mainWidget->render(&pixmap);
        m_mainWidget->setAttribute(Qt::WA_TranslucentBackground, false);

        painter.translate(0, m_currentValue);
        painter.drawPixmap(0, 0, pixmap);
        painter.drawPixmap(0, height(), pixmap);
    }
    else
    {
        QWidget::paintEvent(event);
    }
}



MusicHLayoutAnimationWidget::MusicHLayoutAnimationWidget(QWidget *parent)
    : MusicLayoutAnimationWidget(parent)
{
    m_widgetLayout = new QHBoxLayout(m_mainWidget);
    m_widgetLayout->setContentsMargins(0, 0, 0, 0);
    m_widgetLayout->setSpacing(0);
    m_mainWidget->setLayout(m_widgetLayout);
}

void MusicHLayoutAnimationWidget::start()
{
    if(m_isAnimating)
    {
        return;
    }

    m_animation->setEndValue(width()/m_widgetLayout->count());

    MusicLayoutAnimationWidget::start();
}

void MusicHLayoutAnimationWidget::paintEvent(QPaintEvent * event)
{
    if(m_isAnimating)
    {
        QPainter painter(this);
        QPixmap pixmap( size() );
        pixmap.fill(Qt::transparent);
        m_mainWidget->setAttribute(Qt::WA_TranslucentBackground, true);
        m_mainWidget->render(&pixmap);
        m_mainWidget->setAttribute(Qt::WA_TranslucentBackground, false);

        painter.translate(m_currentValue, 0);
        painter.drawPixmap(0, 0, pixmap);
        painter.drawPixmap(width(), 0, pixmap);
    }
    else
    {
        QWidget::paintEvent(event);
    }
}
