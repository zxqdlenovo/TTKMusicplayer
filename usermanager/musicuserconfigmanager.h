#ifndef MUSICXMLCONFIGMANAGER_H
#define MUSICXMLCONFIGMANAGER_H

#include "musicxmlabstract.h"

class MUSIC_CORE_EXPORT MusicUserConfigManager : public MusicXmlAbstract
{
public:
    explicit MusicUserConfigManager(QObject *parent = 0);

    //UserXMLConfig
    inline bool readUserXMLConfig(){ return readConfig(USERPATH); }
    void writeUserXMLConfig(const MStringsListMap &par);
    void readUserConfig(MStringsListMap &);

};

#endif // MUSICXMLCONFIGMANAGER_H
