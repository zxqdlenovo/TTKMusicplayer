#ifndef QNMAC_H
#define QNMAC_H

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

#include <QtNetwork/QNetworkRequest>
#include "ttkprivate.h"
#include "musicextrasglobaldefine.h"

class QNMacPrivate;

/*! @brief The namespace of the qiniu mac.
 * @author Jemy Graw <jemygraw@gmail.com>
 */
class MUSIC_EXTRAS_EXPORT QNMac
{
public:
    /*!
     * Object contsructor.
     */
    QNMac(const QString &accessKey, const QByteArray &secretKey);

    /*!
     * Qiniu to sign.
     */
    QString sign(const QByteArray &data) const;
    /*!
     * Qiniu to sign with data.
     */
    QString signWithData(const QByteArray &data) const;
    /*!
     * Qiniu to sign with data2.
     */
    QString signWithData2(const QByteArray &data) const;
    /*!
     * Qiniu to sign request.
     */
    QString signRequest(const QUrl &reqestUrl, const QByteArray &bodyData = QByteArray()) const;
    /*!
     * Qiniu to sign request.
     */
    QString signRequest(const QNetworkRequest &request, const QByteArray &bodyData = QByteArray()) const;

private:
    TTK_DECLARE_PRIVATE(QNMac)

};

#endif // QNMAC_H
