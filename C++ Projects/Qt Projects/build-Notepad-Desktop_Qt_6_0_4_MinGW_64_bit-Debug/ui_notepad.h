/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionSave_as;
    QAction *action_Print;
    QAction *action_Exit;
    QAction *action_Copy;
    QAction *action_Print_2;
    QAction *action_Undo;
    QAction *action_Redo;
    QAction *actionCu_t;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(800, 600);
        action_New = new QAction(Notepad);
        action_New->setObjectName(QString::fromUtf8("action_New"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/new-document.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/Images/new.png"), QSize(), QIcon::Normal, QIcon::On);
        action_New->setIcon(icon);
        action_Open = new QAction(Notepad);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/open.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Open->setIcon(icon1);
        action_Save = new QAction(Notepad);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/save.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Save->setIcon(icon2);
        actionSave_as = new QAction(Notepad);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/saveas.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave_as->setIcon(icon3);
        action_Print = new QAction(Notepad);
        action_Print->setObjectName(QString::fromUtf8("action_Print"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/print.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Print->setIcon(icon4);
        action_Exit = new QAction(Notepad);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon5);
        action_Copy = new QAction(Notepad);
        action_Copy->setObjectName(QString::fromUtf8("action_Copy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Images/edit file.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon6);
        action_Print_2 = new QAction(Notepad);
        action_Print_2->setObjectName(QString::fromUtf8("action_Print_2"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Images/edit file.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Print_2->setIcon(icon7);
        action_Undo = new QAction(Notepad);
        action_Undo->setObjectName(QString::fromUtf8("action_Undo"));
        action_Undo->setIcon(icon7);
        action_Redo = new QAction(Notepad);
        action_Redo->setObjectName(QString::fromUtf8("action_Redo"));
        action_Redo->setIcon(icon7);
        actionCu_t = new QAction(Notepad);
        actionCu_t->setObjectName(QString::fromUtf8("actionCu_t"));
        actionCu_t->setIcon(icon7);
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Notepad->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menu_File->addAction(action_New);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addAction(actionSave_as);
        menu_File->addAction(action_Print);
        menu_File->addAction(action_Exit);
        menu_Edit->addAction(action_Copy);
        menu_Edit->addAction(actionCu_t);
        menu_Edit->addAction(action_Print_2);
        menu_Edit->addAction(action_Undo);
        menu_Edit->addAction(action_Redo);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        action_New->setText(QCoreApplication::translate("Notepad", "&New", nullptr));
        action_Open->setText(QCoreApplication::translate("Notepad", "&Open", nullptr));
        action_Save->setText(QCoreApplication::translate("Notepad", "&Save ", nullptr));
        actionSave_as->setText(QCoreApplication::translate("Notepad", "Save &as", nullptr));
        action_Print->setText(QCoreApplication::translate("Notepad", "&Print", nullptr));
        action_Exit->setText(QCoreApplication::translate("Notepad", "&Exit", nullptr));
        action_Copy->setText(QCoreApplication::translate("Notepad", "&Copy", nullptr));
        action_Print_2->setText(QCoreApplication::translate("Notepad", "&Paste", nullptr));
        action_Undo->setText(QCoreApplication::translate("Notepad", "&Undo", nullptr));
        action_Redo->setText(QCoreApplication::translate("Notepad", "&Redo", nullptr));
        actionCu_t->setText(QCoreApplication::translate("Notepad", "Cu&t", nullptr));
        menu_File->setTitle(QCoreApplication::translate("Notepad", "&File", nullptr));
        menu_Edit->setTitle(QCoreApplication::translate("Notepad", "&Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
