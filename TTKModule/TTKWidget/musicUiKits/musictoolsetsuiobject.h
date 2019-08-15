#ifndef MUSICTOOLSETSUIOBJECT_H
#define MUSICTOOLSETSUIOBJECT_H

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

/*! @brief The namespace of the music tool sets button style.
 * @author Greedysky <greedysky@163.com>
 */
namespace MusicUIObject
{
    const QString MKGSongsDetectStartBtn = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_detect_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_detect_hover);}";

    const QString MKGSongsDetectStopBtn = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_detect_stop_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_detect_stop_hover);}";

    const QString MKGSongsRedetectBtn = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_redetect_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_redetect_hover);} \
            QPushButton:disabled{ background-image: url(:/toolSets/btn_redetect_hover);}";

    const QString MKGSongsDetectDownloadBtn = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_detect_download_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_detect_download_hover);} \
            QPushButton:disabled{ background-image: url(:/toolSets/btn_detect_download_disable);}";

    const QString MKGSongsDetectPlayBtn = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_detect_play_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_detect_play_hover);} \
            QPushButton:disabled{ background-image: url(:/toolSets/btn_detect_play_disable);}";

    const QString MKGSongsDetectShareBtn = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_detect_share_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_detect_share_hover);} \
            QPushButton:disabled{ background-image: url(:/toolSets/btn_detect_share_disable);}";

    const QString MKGSongsDetectLoveBtn = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_detect_love_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_detect_love_hover);} \
            QPushButton:disabled{ background-image: url(:/toolSets/btn_detect_love_disable);}";
            
    const QString MKGSongsDetectUnloveBtn = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_detect_unlove_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_detect_unlove_hover);} \
            QPushButton:disabled{ background-image: url(:/toolSets/btn_detect_unlove_disable);}";
            
    const QString MKGCheckTestDuplicate = " \
            QToolButton{ border:none; \
            background-image: url(:/toolSets/btn_duplicate_normal);} \
            QToolButton:hover{ background-image: url(:/toolSets/btn_duplicate_hover);}";

    const QString MKGCheckTestDuplicateClicked = " \
            QToolButton{ border:none; \
            background-image: url(:/toolSets/btn_duplicate_clicked);}";
            
    const QString MKGCheckTestQuality = " \
            QToolButton{ border:none; \
            background-image: url(:/toolSets/btn_quality_normal);} \
            QToolButton:hover{ background-image: url(:/toolSets/btn_quality_hover);}";
            
    const QString MKGCheckTestQualityClicked = " \
            QToolButton{ border:none; \
            background-image: url(:/toolSets/btn_quality_clicked);}";
            
    const QString MKGCheckTestRename = " \
            QToolButton{ border:none; \
            background-image: url(:/toolSets/btn_rename_normal);} \
            QToolButton:hover{ background-image: url(:/toolSets/btn_rename_hover);}";
            
    const QString MKGCheckTestRenameClicked = " \
            QToolButton{ border:none; \
            background-image: url(:/toolSets/btn_rename_clicked);}";
            
    const QString MKGRecord = " \
            QToolButton{ border:none; \
            background-image: url(:/toolSets/btn_record_normal);} \
            QToolButton:hover{ background-image: url(:/toolSets/btn_record_hover);}";
            
    const QString MKGRecordTransfer = " \
            QToolButton{ border:none; \
            background-image: url(:/toolSets/btn_transfer_normal);} \
            QToolButton:hover{ background-image: url(:/toolSets/btn_transfer_hover);}";
            
    const QString MKGRerecord = " \
            QToolButton{ border:none; \
            background-image: url(:/toolSets/btn_rerecord_normal);} \
            QToolButton:hover{ background-image: url(:/toolSets/btn_rerecord_hover);}";
            
    const QString MKGRecordFinish = " \
            QToolButton{ border:none; \
            background-image: url(:/toolSets/btn_record_finish_normal);} \
            QToolButton:hover{ background-image: url(:/toolSets/btn_record_finish_hover);}";
            
    const QString MKGTimeToStop = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_timer_stop);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_timer_stop_hover);}";

    const QString MKGTimeToStopClicked = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_timer_stop_clicked);}";

    const QString MKGTimeToPlay = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_timer_play);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_timer_play_hover);}";
            
    const QString MKGTimeToPlayClicked = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_timer_play_clicked);}";

    const QString MKGTimeToDown = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_timer_down);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_timer_down_hover);}";

    const QString MKGTimeToDownClicked = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_timer_down_clicked);}";
            
    const QString MKGTransferSong = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_import_song_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_import_song_hover);}";
            
    const QString MKGTransferRing = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_import_ring_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_import_ring_hover);}";
            
    const QString MKGTransferChangedDev = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_change_dev_normal);} \
            QPushButton::menu-indicator{ image:none;} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_change_dev_hover);}";
            
    const QString MKGTransferRefreshDev = " \
            QPushButton{ border:none; \
            background-image: url(:/toolSets/btn_refresh_dev_normal);} \
            QPushButton:hover{ background-image: url(:/toolSets/btn_refresh_dev_hover);}";
}

#endif // MUSICTOOLSETSUIOBJECT_H
