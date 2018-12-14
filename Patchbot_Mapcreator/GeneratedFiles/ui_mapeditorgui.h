/********************************************************************************
** Form generated from reading UI file 'mapeditorgui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPEDITORGUI_H
#define UI_MAPEDITORGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapEditorGUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MapEditorGUIClass)
    {
        if (MapEditorGUIClass->objectName().isEmpty())
            MapEditorGUIClass->setObjectName(QStringLiteral("MapEditorGUIClass"));
        MapEditorGUIClass->resize(600, 400);
        menuBar = new QMenuBar(MapEditorGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MapEditorGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MapEditorGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MapEditorGUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MapEditorGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MapEditorGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MapEditorGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MapEditorGUIClass->setStatusBar(statusBar);

        retranslateUi(MapEditorGUIClass);

        QMetaObject::connectSlotsByName(MapEditorGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *MapEditorGUIClass)
    {
        MapEditorGUIClass->setWindowTitle(QApplication::translate("MapEditorGUIClass", "MapEditorGUI", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MapEditorGUIClass: public Ui_MapEditorGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPEDITORGUI_H
