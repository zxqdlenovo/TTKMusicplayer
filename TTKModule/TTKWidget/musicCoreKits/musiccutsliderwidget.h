#ifndef MUSICCUTSLIDERWIDGET_H
#define MUSICCUTSLIDERWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2019 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include <QPushButton>
#include "musicglobaldefine.h"

/*! @brief The class of the move button.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_WIDGET_EXPORT MusicMoveButton : public QPushButton
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicMoveButton)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicMoveButton(QWidget *parent = nullptr);

Q_SIGNALS:
    /*!
     * Moving button pos updated.
     */
    void moveChanged();
    /*!
     * Moving button released.
     */
    void buttonRelease();

protected:
    /*!
     * Override the widget event.
     */
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;

    QPoint m_pressAt;
    bool m_leftButtonPress;

};


/*! @brief The class of the cut slider widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_WIDGET_EXPORT MusicCutSliderWidget : public QWidget
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicCutSliderWidget)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicCutSliderWidget(QWidget *parent = nullptr);

    ~MusicCutSliderWidget();

    /*!
     * Set current position.
     */
    void setPosition(qint64 position);
    /*!
     * Set current duration.
     */
    void setDuration(qint64 duration);
    /*!
     * Resize window bound by given width and height.
     */
    void resizeWindow(int width, int height);

Q_SIGNALS:
    /*!
     * Moving button pos changed.
     */
    void posChanged(qint64 start, qint64 end);
    /*!
     * Moving button pos release changed.
     */
    void buttonReleaseChanged(qint64 pos);

public Q_SLOTS:
    /*!
     * Moving button pos updated.
     */
    void buttonMoveUpdate();
    /*!
     * Left moving button released.
     */
    void buttonReleaseLeft();
    /*!
     * Left moving button released.
     */
    void buttonReleaseRight();

protected:
    /*!
     * Override the widget event.
     */
    virtual void paintEvent(QPaintEvent *event) override;
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;

    MusicMoveButton *m_leftControl, *m_rightControl;
    int m_width, m_height;
    qint64 m_duration, m_position;

};

#endif // MUSICCUTSLIDERWIDGET_H
