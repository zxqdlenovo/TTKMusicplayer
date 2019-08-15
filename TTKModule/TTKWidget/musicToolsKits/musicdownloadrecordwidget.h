#ifndef MUSICDOWNLOADRECORDWIDGET_H
#define MUSICDOWNLOADRECORDWIDGET_H

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

#include "musicfunctiontoolboxwidget.h"
#include "musicdownloadabstracttablewidget.h"

/*! @brief The class of the download record table widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_TOOL_EXPORT MusicDownloadRecordTableWidget : public MusicDownloadAbstractTableWidget
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicDownloadRecordTableWidget)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicDownloadRecordTableWidget(QWidget *parent = nullptr);

    virtual ~MusicDownloadRecordTableWidget();

protected:
    /*!
     * Create item by index and name and size and time.
     */
    virtual void createItem(int index, const MusicSong &record) override;

};

/*! @brief The class of the download tool box widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_TOOL_EXPORT MusicDownloadToolBoxWidget : public MusicFunctionToolBoxWidget
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicDownloadToolBoxWidget)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicDownloadToolBoxWidget(QWidget *parent = nullptr);

    virtual ~MusicDownloadToolBoxWidget();

public Q_SLOTS:
    /*!
     * Update item title.
     */
    void updateItemTitle(int index);

protected:
    /*!
     * Create widget item.
     */
    void createWidgetItem(MusicDownloadAbstractTableWidget *w, const QString &text, int index);
    /*!
     * Create item.
     */
    virtual MusicFunctionToolBoxWidgetItem* createItem(QWidget *item, const QString &text);

    MusicSongItems m_songItems;
    MusicDownloadRecordTableWidget *m_downloadTable;

};

#endif // MUSICDOWNLOADRECORDWIDGET_H
