#ifndef MUSICDOWNLOADQUERYKWRECOMMENDTHREAD_H
#define MUSICDOWNLOADQUERYKWRECOMMENDTHREAD_H

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

#include "musicdownloadkwinterface.h"
#include "musicdownloadqueryrecommendthread.h"

/*! @brief The class to kuwo query recommend download data from net.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_NETWORK_EXPORT MusicDownLoadQueryKWRecommendThread : public MusicDownLoadQueryRecommendThread,
                                                                 private MusicDownLoadKWInterface
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicDownLoadQueryKWRecommendThread)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicDownLoadQueryKWRecommendThread(QObject *parent = nullptr);

    /*!
     * Start to Search data from name and type.
     */
    virtual void startToSearch(const QString &id) override;

public Q_SLOTS:
    /*!
     * Download data from net finished.
     */
    virtual void downLoadFinished() override;

};

#endif // MUSICDOWNLOADQUERYKWRECOMMENDTHREAD_H
