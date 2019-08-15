#ifndef MUSICMESSAGEABOUTDIALOG_H
#define MUSICMESSAGEABOUTDIALOG_H

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

#include "musicabstractmovedialog.h"

class MusicDownloadCounterPVThread;

namespace Ui {
    class MusicMessageAboutDialog;
}
/*! @brief The class of the about application info dialog.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_WIDGET_EXPORT MusicMessageAboutDialog : public MusicAbstractMoveDialog
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicMessageAboutDialog)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicMessageAboutDialog(QWidget *parent = nullptr);

    virtual ~MusicMessageAboutDialog();

public Q_SLOTS:
    /*!
     * Get counter pv finished.
     */
    void musicGetCounterFinished(const QString &data);
    /*!
     * Override exec function.
     */
    virtual int exec();

protected:
    Ui::MusicMessageAboutDialog *m_ui;
    MusicDownloadCounterPVThread *m_counterPVThread;

};

#endif // MUSICMESSAGEABOUTDIALOG_H
