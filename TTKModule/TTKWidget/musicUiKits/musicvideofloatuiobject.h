#ifndef MUSICVIDEOFLOATUIOBJECT_H
#define MUSICVIDEOFLOATUIOBJECT_H

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

#include <QObject>

/*! @brief The namespace of the video float button style.
 * @author Greedysky <greedysky@163.com>
 */
namespace MusicUIObject
{
    const QString MKGVideoFloatDownload = " \
            QPushButton{ border:none;\
            background-image: url(:/video/btn_download_normal);} \
            QPushButton:hover{ background-image: url(:/video/btn_download_hover);}";

    const QString MKGVideoFloatFresh = " \
            QPushButton{ border:none;\
            background-image: url(:/video/btn_fresh_normal);} \
            QPushButton:hover{ background-image: url(:/video/btn_fresh_hover);}";

    const QString MKGVideoFloatFullscreen = " \
            QPushButton{ border:none;\
            background-image: url(:/video/btn_fullscreen_normal);} \
            QPushButton:hover{ background-image: url(:/video/btn_fullscreen_hover);}";

    const QString MKGVideoFloatSearch = " \
            QPushButton{ border:none;\
            background-image: url(:/video/btn_search_normal);} \
            QPushButton:hover{ background-image: url(:/video/btn_search_hover);}";

    const QString MKGVideoFloatShare = " \
            QPushButton{ border:none;\
            background-image: url(:/video/btn_share_normal);} \
            QPushButton:hover{ background-image: url(:/video/btn_share_hover);}";

}

#endif // MUSICVIDEOFLOATUIOBJECT_H
