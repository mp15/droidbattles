/***************************************************************************
                          startdeathbatt.cpp  -  description
                             -------------------
    begin                : Fri Jan 5 2001
    copyright            : (C) 2001 by Andreas Agorander
    email                : Bluefire@linux.nu
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "startdeathbatt.h"
//Added by qt3to4:
#include <Q3TextStream>

startdeathbatt::startdeathbatt(QWidget* parent)
	: startsurvbatt(parent)
{
    tnumfights->setText ("Number of frags:");
    loadfilesettings();
}

startdeathbatt::~startdeathbatt()
{
}

void startdeathbatt::loadfilesettings()
{
    QString temp = QDir::homeDirPath();
    temp += "/droidbattles/deathbattle.save";
    QFile f (temp);
    if (f.exists() && f.open (QIODevice::ReadOnly))
    {
        Q3TextStream s (&f);
        for (int x=0; x<8; x++)
        {
            s >> botfiles[x];
            s >> temp;
            if (botfiles[x] == QString ("fff"))
                botfiles[x] = "";
            team[x]->setCurrentItem (temp.toInt());
            shownames[x]->setText (botfiles[x]);
        }
        s >> temp;
        ifteams->setChecked (temp.toInt());
        s >> temp;
        wnumfights->setText (temp);
        s >> temp;
        length->setText (temp);
        s >> temp;
        maxx->setValue (temp.toInt());
        s >> temp;
        maxy->setValue (temp.toInt());
        f.close();
    }
}

void startdeathbatt::ocl()
{
    QString temp = QDir::homeDirPath();
    temp += "/droidbattles/deathbattle.save";
    QFile f (temp);
    if (f.open (QIODevice::WriteOnly))
    {
        Q3TextStream s (&f);
        for (int x=0; x<8; x++)
        {
            if (botfiles[x] == QString (""))
                s << "fff" << " " << team[x]->currentItem() << "\n";
            else
                s << botfiles[x] << " " << team[x]->currentItem() << "\n";
        }
        s << ifteams->isChecked() << "\n";
        s << getnumfights() << "\n";
        s << getlength() << "\n";
        s << getxsize() << " " << getysize() << "\n";
        f.close();
    }
    emit okclicked();
}