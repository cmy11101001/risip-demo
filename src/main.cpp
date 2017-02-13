/***********************************************************************************
**    Copyright (C) 2016  Petref Saraci
**
**    This program is free software: you can redistribute it and/or modify
**    it under the terms of the GNU General Public License as published by
**    the Free Software Foundation, either version 3 of the License, or
**    (at your option) any later version.
**
**    This program is distributed in the hope that it will be useful,
**    but WITHOUT ANY WARRANTY; without even the implied warranty of
**    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**    GNU General Public License for more details.
**
**    You have received a copy of the GNU General Public License
**    along with this program. See LICENSE.GPLv3
**    A copy of the license can be found also here <http://www.gnu.org/licenses/>.
**
************************************************************************************/

#include <QGuiApplication>

#include "risip.h"
#include "risipapplicationsettings.h"
#include "risipuiloader.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    risip::RisipApplicationSettings::instance()->setOrganizationName(QString("risipsdk-demo"));
    risip::RisipApplicationSettings::instance()->setApplicationName(QString("risipsdk-demo"));
    risip::RisipApplicationSettings::instance()->setOrganizationDomain(QString("http://risip.io"));

    //risi wrapper object - registering the c++ classes to the QML engine
    risip::Risip::registerToQml();

    //the ui loader resolves which ui to be loaded for the platform/operating sytem
    risip::RisipUiLoader ui;
    ui.setQmlFile("qrc:/ui/base/Main.qml");
    ui.start();

    return app.exec();
}
