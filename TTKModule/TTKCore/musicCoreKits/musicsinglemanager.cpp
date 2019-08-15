#include "musicsinglemanager.h"

MusicSingleManager::MusicSingleManager()
{

}

void MusicSingleManager::createObject(const QString &name, QObject *object)
{
    m_parameter[name] = object;
}

void MusicSingleManager::removeObject(const QString &name)
{
    m_parameter.take(name);
}

QObject *MusicSingleManager::object(const QString &name)
{
    return m_parameter[name];
}

bool MusicSingleManager::contains(const QString &name) const
{
    return m_parameter.contains(name);
}
