/* =================================================
 * This file is part of the TTK Music Player qmmp plugin project
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

#ifndef LIGHTFACTORY_H
#define LIGHTFACTORY_H

#include <QWidget>
#include "qmmp_export.h"

/*! @brief Helper class to light widget.
 * @author Greedysky <greedysky@163.com>
 */
class QMMP_EXPORT Light : public QWidget
{
public:
    /*!
     * Constructor.
     */
    explicit Light(QWidget *parent = 0) : QWidget(parent) {}
    /*!
     * Destructor.
     */
    virtual ~Light() {}
     /*!
     * Open light file path.
     * Subclass should reimplement this function.
     */
    virtual void open(const QString &path) = 0;
    /*!
     * Start light plugin.
     * Subclass should reimplement this function.
     */
    virtual void start() = 0;
    /*!
     * Stop light plugin.
     * Subclass should reimplement this function.
     */
    virtual void stop() = 0;

};

/*! @brief Helper class to store light plugin properies.
 * @author Greedysky <greedysky@163.com>
 */
class QMMP_EXPORT LightProperties
{
public:
    /*!
     * Constructor
     */
    LightProperties()
    {
        hasSettings = false;
    }
    QString name;      /*!< Light plugin full name */
    QString shortName; /*!< Light plugin short name for internal usage */
    bool hasSettings;  /*!< Should be \b true if plugin has settings dialog, otherwise returns \b false */
};
/*! @brief Light plugin interface (Light factory).
 * @author Greedysky <greedysky@163.com>
 */
class QMMP_EXPORT LightFactory
{
public:
    /*!
     * Destructor.
     */
    virtual ~LightFactory() {}
     /*!
     * Returns Light plugin properties.
     */
    virtual const LightProperties properties() const = 0;
    /*!
     * Creates Light provided by plugin.
     * @param parent Parent object.
     */
    virtual Light *create(QWidget *parent) = 0;

};

Q_DECLARE_INTERFACE(LightFactory, "LightFactory/1.0")

#endif
