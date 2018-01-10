/********************************************************************************
** Form generated from reading UI file 'newfile.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILE_H
#define UI_NEWFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newfile
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *newfile)
    {
        if (newfile->objectName().isEmpty())
            newfile->setObjectName(QStringLiteral("newfile"));
        newfile->resize(800, 600);
        menubar = new QMenuBar(newfile);
        menubar->setObjectName(QStringLiteral("menubar"));
        newfile->setMenuBar(menubar);
        centralwidget = new QWidget(newfile);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        newfile->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(newfile);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        newfile->setStatusBar(statusbar);

        retranslateUi(newfile);

        QMetaObject::connectSlotsByName(newfile);
    } // setupUi

    void retranslateUi(QMainWindow *newfile)
    {
        newfile->setWindowTitle(QApplication::translate("newfile", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newfile: public Ui_newfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILE_H
