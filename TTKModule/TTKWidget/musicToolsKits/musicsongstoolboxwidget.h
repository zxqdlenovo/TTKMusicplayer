#ifndef MUSICSONGSTOOLBOXWIDGET_H
#define MUSICSONGSTOOLBOXWIDGET_H

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

class MusicSort;
class MusicSongsToolItemRenamedWidget;

/*! @brief The class of the tool box top widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_TOOL_EXPORT MusicSongsToolBoxTopWidget : public MusicFunctionToolBoxTopWidget
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicSongsToolBoxTopWidget)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicSongsToolBoxTopWidget(int index, const QString &text, QWidget *parent = nullptr);

    virtual ~MusicSongsToolBoxTopWidget();

    /*!
     * Set music sort.
     */
    inline void setMusicSort(MusicSort *sort) { m_musicSort = sort;}

Q_SIGNALS:
    /*!
     * Add new play list item.
     */
    void addNewRowItem();
    /*!
     * Delete selected play list item.
     */
    void deleteRowItem(int index);
    /*!
     * Delete all items in play list item.
     */
    void deleteRowItemAll(int index);
    /*!
     * Open rename selected play list item widget.
     */
    void changRowItemName(int index, const QString &name);
    /*!
     * Add new music file or files to list.
     */
    void addNewFiles(int index);
    /*!
     * Add new music dir to list.
     */
    void addNewDir(int index);
    /*!
     * Music list songs sort by type.
     */
    void musicListSongSortBy(int index);
    /*!
     * Add music to played list and play later.
     */
    void addToPlayLater(int index);
    /*!
     * Add music to played list.
     */
    void addToPlayedList(int index);

public Q_SLOTS:
    /*!
     * Delete selected play list item.
     */
    void deleteRowItem();
    /*!
     * Delete all items in play list item.
     */
    void deleteRowItemAll();
    /*!
     * Open rename selected play list item widget.
     */
    void changRowItemName();
    /*!
     * Rename item artist label is finised.
     */
    void setChangItemName(const QString &name);
    /*!
     * Add new music file or files to list.
     */
    void addNewFiles();
    /*!
     * Add new music dir to list.
     */
    void addNewDir();
    /*!
     * Export music songs by item list.
     */
    void exportSongsItemList();
    /*!
     * Show menu items.
     */
    void showMenu();
    /*!
     * Music list songs sort by type.
     */
    void musicListSongSortBy(QAction *action);
    /*!
     * Show share list dialog.
     */
    void showShareListDialog();
    /*!
     * Show enhance lossless dialog.
     */
    void showEnhanceLosslessDialog();
    /*!
     * Add music to played list and play later.
     */
    void addToPlayLater();
    /*!
     * Add music to played list.
     */
    void addToPlayedList();

protected:
    /*!
     * Check the item is enable or not.
     */
    virtual bool isItemEnable() const override;
    /*!
     * Override the widget event.
     */
    virtual void contextMenuEvent(QContextMenuEvent *event) override;
    
    MusicSort *m_musicSort;
    MusicSongsToolItemRenamedWidget *m_renameLine;

};


/*! @brief The class of the tool box mask widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_TOOL_EXPORT MusicSongsToolBoxMaskWidget : public MusicSongsToolBoxTopWidget
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicSongsToolBoxMaskWidget)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicSongsToolBoxMaskWidget(QWidget *parent = nullptr);

    virtual ~MusicSongsToolBoxMaskWidget();

protected:
    /*!
     * Override the widget event.
     */
    virtual void paintEvent(QPaintEvent *event) override;

    QTimer *m_updateTimer;

};


/*! @brief The class of the tool box widget item.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_TOOL_EXPORT MusicSongsToolBoxWidgetItem : public MusicFunctionToolBoxWidgetItem
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicSongsToolBoxWidgetItem)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicSongsToolBoxWidgetItem(int index, const QString &text, QWidget *parent = nullptr);

    /*!
     * Set music sort.
     */
    void setMusicSort(MusicSort *sort);

Q_SIGNALS:
    /*!
     * Add new play list item.
     */
    void addNewRowItem();
    /*!
     * Delete selected play list item.
     */
    void deleteRowItem(int index);
    /*!
     * Delete all items in play list item.
     */
    void deleteRowItemAll(int index);
    /*!
     * Open rename selected play list item widget.
     */
    void changRowItemName(int index, const QString &name);
    /*!
     * Add new music file or files to list.
     */
    void addNewFiles(int index);
    /*!
     * Add new music dir to list.
     */
    void addNewDir(int index);
    /*!
     * Music list songs sort by type.
     */
    void musicListSongSortBy(int index);
    /*!
     * Add music to played list and play later.
     */
    void addToPlayLater(int index);
    /*!
     * Add music to played list.
     */
    void addToPlayedList(int index);

};


/*! @brief The class of the tool box widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_TOOL_EXPORT MusicSongsToolBoxWidget : public MusicFunctionToolBoxWidget
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicSongsToolBoxWidget)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicSongsToolBoxWidget(QWidget *parent = nullptr);

    /*!
     * Set music sort.
     */
    void setMusicSort(QWidget *item, MusicSort *sort);

protected:
    /*!
     * Create item.
     */
    virtual MusicFunctionToolBoxWidgetItem* createItem(QWidget *item, const QString &text) override;

};

#endif // MUSICSONGSTOOLBOXWIDGET_H
