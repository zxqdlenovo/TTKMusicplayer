#ifndef MUSICCONTEXTUIOBJECT_H
#define MUSICCONTEXTUIOBJECT_H

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

/*! @brief The namespace of the context button style.
 * @author Greedysky <greedysky@163.com>
 */
namespace MusicUIObject
{
    const QString MKGContextPlay = " \
            QToolButton{ border:none; \
            background-image: url(:/contextMenu/btn_play_hover);} \
            QToolButton:hover{ background-image: url(:/contextMenu/btn_play_normal);}";

    const QString MKGContextPause = " \
            QToolButton{ border:none; \
            background-image: url(:/contextMenu/btn_pause_hover);} \
            QToolButton:hover{ background-image: url(:/contextMenu/btn_pause_normal);}";

    const QString MKGContextNext = " \
            QToolButton{ border:none; \
            background-image: url(:/contextMenu/btn_next_hover);} \
            QToolButton:hover{ background-image: url(:/contextMenu/btn_next_normal);}";

    const QString MKGContextPrevious = " \
            QToolButton{ border:none; \
            background-image: url(:/contextMenu/btn_previous_hover);} \
            QToolButton:hover{ background-image: url(:/contextMenu/btn_previous_normal);}";

}

#endif // MUSICCONTEXTUIOBJECT_H
