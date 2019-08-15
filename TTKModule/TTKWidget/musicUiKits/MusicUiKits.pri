# =================================================
# * This file is part of the TTK Music Player project
# * Copyright (C) 2015 - 2019 Greedysky Studio
#
# * This program is free software; you can redistribute it and/or modify
# * it under the terms of the GNU General Public License as published by
# * the Free Software Foundation; either version 3 of the License, or
# * (at your option) any later version.
#
# * This program is distributed in the hope that it will be useful,
# * but WITHOUT ANY WARRANTY; without even the implied warranty of
# * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# * GNU General Public License for more details.
#
# * You should have received a copy of the GNU General Public License along
# * with this program; If not, see <http://www.gnu.org/licenses/>.
# =================================================

INCLUDEPATH += $$PWD

!contains(CONFIG, TTK_NO_MSVC_LINK_NEED){
HEADERS  += \
    $$PWD/musicuiobject.h \
    $$PWD/musiccontextuiobject.h \
    $$PWD/musicdesktoplrcuiobject.h \
    $$PWD/musicfunctionlistuiobject.h \
    $$PWD/musicfunctionuiobject.h \
    $$PWD/musicinlinefloatuiobject.h \
    $$PWD/musicinlinelrcuiobject.h \
    $$PWD/musicleftitemlistuiobject.h \
    $$PWD/musicmagicwidgetuiobject.h \
    $$PWD/musicqualitywidgetuiobject.h \
    $$PWD/musictinyuiobject.h \
    $$PWD/musictoolsetsuiobject.h \
    $$PWD/musicvideofloatuiobject.h \
    $$PWD/musicvideouiobject.h \
    $$PWD/musicwidgetheaders.h
}

contains(CONFIG, TTK_BUILD_LIB){
FORMS    += \
    $$PWD/musicApplication/musicapplication.ui \
    $$PWD/musicLrcKits/musiclrcartphotouploadwidget.ui \
    $$PWD/musicLrcKits/musiclrcmakerwidget.ui \
    $$PWD/musicLrcKits/musiclrcerrorwidget.ui \
    $$PWD/musicLrcKits/musiclrcsearchwidget.ui \
    $$PWD/musicLrcKits/musiclrclocallinkwidget.ui \
    $$PWD/musicLrcKits/musiclrccolorwidget.ui \
    $$PWD/musicLrcKits/musiclrcposterwidget.ui \
    $$PWD/musicLrcKits/musiclrcdownloadbatchwidget.ui \
    $$PWD/musicToolsetsKits/musicaudiorecorderwidget.ui \
    $$PWD/musicToolsetsKits/musicdesktopwallpaperwidget.ui \
    $$PWD/musicToolsetsKits/musicfileinformationwidget.ui \
    $$PWD/musicToolsetsKits/musiclocalsongsmanagerwidget.ui \
    $$PWD/musicToolsetsKits/musictimerwidget.ui \
    $$PWD/musicToolsetsKits/musictransformwidget.ui \
    $$PWD/musicToolsetsKits/musicnetworkconnectiontestwidget.ui \
    $$PWD/musicToolsetsKits/musicvolumegainwidget.ui \
    $$PWD/musicToolsetsKits/musicsoundtouchwidget.ui \
    $$PWD/musicToolsetsKits/musicsongchecktoolswidget.ui \
    $$PWD/musicToolsetsKits/musicsongringtonemakerwidget.ui \
    $$PWD/musicToolsetsKits/musicsoundkmicrowidget.ui \
    $$PWD/musicToolsetsKits/musicspectrumwidget.ui \
    $$PWD/musicToolsKits/musicwebmusicradioplaywidget.ui \
    $$PWD/musicToolsKits/musicconnecttransferwidget.ui \
    $$PWD/musicToolsKits/musiccloudfilemanagerdialog.ui \
    $$PWD/musicToolsKits/musiccloudfileinformationwidget.ui \
    $$PWD/musicToolsKits/musictoolsetswidget.ui \
    $$PWD/musicUserKits/musicuserdialog.ui \
    $$PWD/musicUserKits/musicusermanagerdialog.ui \
    $$PWD/musicUserKits/musicuserrecordwidget.ui \
    $$PWD/musicUserKits/musicuserwindow.ui \
    $$PWD/musicWidgetKits/musicbackgroundskindialog.ui \
    $$PWD/musicWidgetKits/musicbackgroundpalettewidget.ui \
    $$PWD/musicWidgetKits/musicdownloadwidget.ui \
    $$PWD/musicWidgetKits/musicdownloadresetwidget.ui \
    $$PWD/musicWidgetKits/musicequalizerdialog.ui \
    $$PWD/musicWidgetKits/musicmessagebox.ui \
    $$PWD/musicWidgetKits/musiccolordialog.ui \
    $$PWD/musicWidgetKits/musicsettingwidget.ui \
    $$PWD/musicWidgetKits/musicsongsharingwidget.ui \
    $$PWD/musicWidgetKits/musicsonglistsharingwidget.ui \
    $$PWD/musicWidgetKits/musicsongslistiteminfowidget.ui \
    $$PWD/musicWidgetKits/musicsourceupdatewidget.ui \
    $$PWD/musicWidgetKits/musicsoundeffectswidget.ui \
    $$PWD/musicWidgetKits/musicmessageaboutdialog.ui \
    $$PWD/musicWidgetKits/musicsonglistenhancelosslesswidget.ui \
    $$PWD/musicWidgetKits/musicdownloadbatchwidget.ui \
    $$PWD/musicWidgetKits/musicsongitemselecteddialog.ui
}
