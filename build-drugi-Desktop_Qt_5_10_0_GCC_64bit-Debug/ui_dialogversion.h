/********************************************************************************
** Form generated from reading UI file 'dialogversion.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVERSION_H
#define UI_DIALOGVERSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialogversion
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *Dialogversion)
    {
        if (Dialogversion->objectName().isEmpty())
            Dialogversion->setObjectName(QStringLiteral("Dialogversion"));
        Dialogversion->resize(400, 300);
        textEdit = new QTextEdit(Dialogversion);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 70, 251, 141));

        retranslateUi(Dialogversion);

        QMetaObject::connectSlotsByName(Dialogversion);
    } // setupUi

    void retranslateUi(QDialog *Dialogversion)
    {
        Dialogversion->setWindowTitle(QApplication::translate("Dialogversion", "Dialog", nullptr));
        textEdit->setHtml(QApplication::translate("Dialogversion", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">Version 0.1</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogversion: public Ui_Dialogversion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVERSION_H
