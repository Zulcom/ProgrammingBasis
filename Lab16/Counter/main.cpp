﻿// ======================================================================
//  main.cpp
// ======================================================================
//                   This file is a part of the book 
//             "Qt 4.8 Professional programming with C++"
// ======================================================================
//  Copyright (c) 2012 by Max Schlee
//
//  Email : Max.Schlee@neonway.com
//  Blog  : http://www.maxschlee.com
//
//  Social Networks
//  ---------------
//  FaceBook     : http://www.facebook.com/mschlee
//  Twitter      : http://twitter.com/Max_Schlee
//  2Look.me     : http://2look.me/NW100003
//  Xing         : http://www.xing.com/profile/Max_Schlee
//  VKontakte.ru : http://www.vkontakte.ru/max.schlee
// ======================================================================

#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

#include "Counter.h"

// ----------------------------------------------------------------------
int main (int argc, char** argv)
{
    QApplication app(argc, argv);

    QLabel      lbl("0");
    QPushButton cmd("ADD");
    Counter     counter;

    lbl.show();
    cmd.show();

    QObject::connect(&cmd, SIGNAL(clicked()), 
                     &counter, SLOT(slotInc())
                    );

    QObject::connect(&counter, SIGNAL(counterChanged(int)),
                     &lbl, SLOT(setNum(int))
                    );

    QObject::connect(&counter, SIGNAL(goodbye()), 
                     &app, SLOT(quit())
                    );

    return app.exec();
}
