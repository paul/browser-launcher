/********************************************************************************
** Form generated from reading ui file 'launcher.ui'
**
** Created: Mon Jul 13 05:01:09 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LAUNCHER_H
#define UI_LAUNCHER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Launcher
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lstBrowsers;
    QPushButton *btnLaunch;

    void setupUi(QDialog *Launcher)
    {
        if (Launcher->objectName().isEmpty())
            Launcher->setObjectName(QString::fromUtf8("Launcher"));
        Launcher->resize(256, 210);
        verticalLayout = new QVBoxLayout(Launcher);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lstBrowsers = new QListWidget(Launcher);
        new QListWidgetItem(lstBrowsers);
        new QListWidgetItem(lstBrowsers);
        new QListWidgetItem(lstBrowsers);
        new QListWidgetItem(lstBrowsers);
        new QListWidgetItem(lstBrowsers);
        lstBrowsers->setObjectName(QString::fromUtf8("lstBrowsers"));

        verticalLayout->addWidget(lstBrowsers);

        btnLaunch = new QPushButton(Launcher);
        btnLaunch->setObjectName(QString::fromUtf8("btnLaunch"));

        verticalLayout->addWidget(btnLaunch);


        retranslateUi(Launcher);
        QObject::connect(btnLaunch, SIGNAL(clicked()), Launcher, SLOT(accept()));
        QObject::connect(lstBrowsers, SIGNAL(itemActivated(QListWidgetItem*)), Launcher, SLOT(accept()));

        QMetaObject::connectSlotsByName(Launcher);
    } // setupUi

    void retranslateUi(QDialog *Launcher)
    {
        Launcher->setWindowTitle(QApplication::translate("Launcher", "Launcher", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = lstBrowsers->isSortingEnabled();
        lstBrowsers->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lstBrowsers->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Launcher", "Firefox 3.5", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = lstBrowsers->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Launcher", "Firefox 3.5 - Development", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = lstBrowsers->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Launcher", "Opera", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = lstBrowsers->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Launcher", "Opera10", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = lstBrowsers->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Launcher", "Konqueror", 0, QApplication::UnicodeUTF8));
        lstBrowsers->setSortingEnabled(__sortingEnabled);

        btnLaunch->setText(QApplication::translate("Launcher", "L&aunch", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Launcher);
    } // retranslateUi

};

namespace Ui {
    class Launcher: public Ui_Launcher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUNCHER_H
