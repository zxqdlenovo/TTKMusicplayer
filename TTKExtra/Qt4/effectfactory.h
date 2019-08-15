/***************************************************************************
 *   Copyright (C) 2007-2019 by Ilya Kotov                                 *
 *   forkotov02@ya.ru                                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/

#ifndef EFFECTFACTORY_H
#define EFFECTFACTORY_H

#include <QObject>
#include "qmmp_export.h"

class QObject;
class QWidget;
class Effect;

/*! @brief Helper class to store effect plugin properties.
 * @author Ilya Kotov <forkotov02@ya.ru>
 */
class QMMP_EXPORT EffectProperties
{
public:
    /*!
     * This enum describes effect preferd position.
     */
    enum Priority
    {
        EFFECT_PRIORITY_LOW = 0,    /*!< Low priority */
        EFFECT_PRIORITY_DEFAULT,    /*!< Default priority */
        EFFECT_PRIORITY_HIGH        /*!< High priority */
    };
    /*!
     * Constructor
     */
    EffectProperties()
    {
        hasSettings = false;
        priority = EFFECT_PRIORITY_DEFAULT;
    }
    QString name;        /*!< Effect plugin full name */
    QString shortName;   /*!< Effect plugin short name for internal usage */
    bool hasSettings;    /*!< Should be \b true if plugin has settings dialog, otherwise returns \b false */
    int priority;        /*!< Effect priority. Effecs with higher priority will be applied first */
};
/*! @brief Effect plugin interface (effect factory).
 * @author Ilya Kotov <forkotov02@ya.ru>
 */
class QMMP_EXPORT EffectFactory
{
public:
    /*!
     * Returns effect plugin properties.
     */
    virtual const EffectProperties properties() const = 0;
    /*!
     * Creates effect provided by plugin.
     */
    virtual Effect *create() = 0;
    /*!
     * Shows settings dialog.
     * @param parent Parent widget.
     */
    virtual void showSettings(QWidget *parent) = 0;

};

Q_DECLARE_INTERFACE(EffectFactory, "EffectFactory/1.0")

#endif
