#ifndef MUSICDESKTOPWALLPAPERTHREAD_H
#define MUSICDESKTOPWALLPAPERTHREAD_H

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

#include "musicobject.h"
#include "musicglobaldefine.h"

#if defined Q_OS_WIN
#   include <qt_windows.h>
#   if defined Q_CC_MSVC
#      pragma comment(lib, "user32.lib")
#   endif
#endif
class QTimer;

/*! @brief The class of the desktop wallpaper thread.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_TOOLSET_EXPORT MusicDesktopWallpaperThread : public QObject
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicDesktopWallpaperThread)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicDesktopWallpaperThread(QObject *parent = nullptr);

    ~MusicDesktopWallpaperThread();

    /*!
     * Set time interval.
     */
    void setInterval(int msec);
    /*!
     * State is running.
     */
    bool isRunning() const;

    /*!
     * Set random mode check.
     */
    void setRandom(bool random);
    /*!
     * Set image path.
     */
    void setImagePath(const QStringList &list);

#if defined Q_OS_WIN
    /*!
     * Find desktop icon wnd.
     */
    HWND findDesktopIconWnd();
    /*!
     * Send message to desktop.
     */
    void sendMessageToDesktop();
#endif

Q_SIGNALS:
    /*!
     * Update background pixmap.
     */
    void updateBackground(const QPixmap &pix);

public Q_SLOTS:
    /*!
     * Strat thread now.
     */
    void start();
    /*!
     * Stop and quit current thread.
     */
    void stop();
    /*!
     * Thread run now.
     */
    void timeout();

protected:
    bool m_run, m_random;
    int m_currentImageIndex;
    QTimer *m_timer;
    QStringList m_path;

};

#endif // MUSICDESKTOPWALLPAPERTHREAD_H
