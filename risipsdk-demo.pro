##################################################################################
#    Copyright (C) 2016  Petref Saraci
#    http://risip.io
#
#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You have received a copy of the GNU General Public License
#    along with this program. See LICENSE.GPLv3
#    A copy of the license can be found also here <http://www.gnu.org/licenses/>.
#
###################################################################################

include(risip-voipsdk/risipsdk.pri)

TEMPLATE = app
TARGET = risip-demo
DESTDIR = $$PWD/bin

SOURCES += src/main.cpp

HEADERS +=

RESOURCES += qml.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

