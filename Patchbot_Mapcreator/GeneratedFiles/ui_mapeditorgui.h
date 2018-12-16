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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <cursordisplaywidget.h>
#include <renderwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MapEditorGUIClass
{
public:
    QAction *newMapAction;
    QAction *openMapAction;
    QAction *saveMapAction;
    QAction *aboutAction;
    QAction *reportBugAction;
    QWidget *centralWidget;
    QGridLayout *gridLayout_5;
    QSpacerItem *spacerCursorEnvironment;
    QSpacerItem *spacerEnvironmentRobots;
    QSpacerItem *spacerRobotsWindow;
    QWidget *cursorLayout;
    QGridLayout *gridLayout_4;
    QLabel *staticCursorLabel;
    CursorDisplayWidget *cursorWidget;
    QWidget *robotsLayout;
    QGridLayout *robotLayout;
    QPushButton *followerButton;
    QPushButton *patchbotButton;
    QPushButton *hunterButton;
    QPushButton *swimmerButton;
    QLabel *staticRobotsLabel;
    QPushButton *diggerButton;
    QPushButton *snifferButton;
    QPushButton *pusherButton;
    QPushButton *buggerButton;
    QWidget *environmentLayout;
    QGridLayout *sadf;
    QPushButton *alienGrassButton;
    QPushButton *gravelButton;
    QPushButton *rootServerButton;
    QPushButton *abyssButton;
    QPushButton *secretEntranceButton;
    QPushButton *manualDoorButton;
    QPushButton *steelplanksButton;
    QLabel *staticEnvironmentLabel;
    QPushButton *resetButton;
    QPushButton *waterButton;
    QPushButton *destructibleWallButton;
    QPushButton *autoDoorButton;
    QPushButton *indestructibleWallButton;
    QWidget *editorLayout;
    QGridLayout *asdf;
    RenderWidget *mapRenderWidget;
    QScrollBar *editorXScrollbar;
    QScrollBar *editorYScrollbar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MapEditorGUIClass)
    {
        if (MapEditorGUIClass->objectName().isEmpty())
            MapEditorGUIClass->setObjectName(QStringLiteral("MapEditorGUIClass"));
        MapEditorGUIClass->resize(800, 600);
        MapEditorGUIClass->setMinimumSize(QSize(800, 600));
        MapEditorGUIClass->setStyleSheet(QLatin1String("/* Background colors */\n"
"QWidget#centralWidget{\n"
"background-color: rgb(205, 245, 255)\n"
"}\n"
"\n"
"QWidget#robotsLayout, QWidget#environmentLayout,\n"
"QWidget#cursorLayout, QWidget#editorLayout{\n"
"background-color: rgb(87, 172, 200)\n"
"}\n"
"\n"
"/* Images for environment button group TODO add erase/reset image */\n"
"QPushButton#resetButton{\n"
"border-image: url(:/MapEditorGUI/images/reset.tga)\n"
"}\n"
"QPushButton#steelplanksButton{\n"
"border-image: url(:/MapEditorGUI/images/steelplanks.tga)\n"
"}\n"
"QPushButton#abyssButton{\n"
"border-image: url(:/MapEditorGUI/images/abyss.tga)\n"
"}\n"
"QPushButton#waterButton{\n"
"border-image: url(:/MapEditorGUI/images/water.tga)\n"
"}\n"
"QPushButton#rootServerButton{\n"
"border-image: url(:/MapEditorGUI/images/root_server.tga)\n"
"}\n"
"QPushButton#alienGrassButton{\n"
"border-image: url(:/MapEditorGUI/images/alien_grass.tga)\n"
"}\n"
"QPushButton#gravelButton{\n"
"border-image: url(:/MapEditorGUI/images/gravel.tga)\n"
"}\n"
"QPushButton#secretEntranceB"
                        "utton{\n"
"border-image: url(:/MapEditorGUI/images/secret_entrance.tga)\n"
"}\n"
"QPushButton#manualDoorButton{\n"
"border-image: url(:/MapEditorGUI/images/manual_door.tga)\n"
"}\n"
"QPushButton#autoDoorButton{\n"
"border-image: url(:/MapEditorGUI/images/auto_door.tga)\n"
"}\n"
"QPushButton#indestructibleWallButton{\n"
"border-image: url(:/MapEditorGUI/images/indestructible_wall.tga)\n"
"}\n"
"QPushButton#destructibleWallButton{\n"
"border-image: url(:/MapEditorGUI/images/destructible_wall.tga)\n"
"}\n"
"\n"
"/* Images for Robots section */\n"
"QPushButton#patchbotButton{\n"
"border-image: url(:/MapEditorGUI/images/patchbot.tga)\n"
"}\n"
"QPushButton#buggerButton{\n"
"border-image: url(:/MapEditorGUI/images/typ1_bugger.tga)\n"
"}\n"
"QPushButton#pusherButton{\n"
"border-image: url(:/MapEditorGUI/images/typ2_pusher.tga)\n"
"}\n"
"QPushButton#diggerButton{\n"
"border-image: url(:/MapEditorGUI/images/typ3_digger.tga)\n"
"}\n"
"QPushButton#swimmerButton{\n"
"border-image: url(:/MapEditorGUI/images/typ4_swimmer.tga"
                        ")\n"
"}\n"
"QPushButton#followerButton{\n"
"border-image: url(:/MapEditorGUI/images/typ5_follower.tga)\n"
"}\n"
"QPushButton#hunterButton{\n"
"border-image: url(:/MapEditorGUI/images/typ6_hunter.tga)\n"
"}\n"
"QPushButton#snifferButton{\n"
"border-image: url(:/MapEditorGUI/images/typ7_sniffer.tga)\n"
"}"));
        newMapAction = new QAction(MapEditorGUIClass);
        newMapAction->setObjectName(QStringLiteral("newMapAction"));
        openMapAction = new QAction(MapEditorGUIClass);
        openMapAction->setObjectName(QStringLiteral("openMapAction"));
        saveMapAction = new QAction(MapEditorGUIClass);
        saveMapAction->setObjectName(QStringLiteral("saveMapAction"));
        aboutAction = new QAction(MapEditorGUIClass);
        aboutAction->setObjectName(QStringLiteral("aboutAction"));
        reportBugAction = new QAction(MapEditorGUIClass);
        reportBugAction->setObjectName(QStringLiteral("reportBugAction"));
        centralWidget = new QWidget(MapEditorGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_5 = new QGridLayout(centralWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        spacerCursorEnvironment = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(spacerCursorEnvironment, 1, 1, 1, 1);

        spacerEnvironmentRobots = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(spacerEnvironmentRobots, 3, 1, 1, 1);

        spacerRobotsWindow = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(spacerRobotsWindow, 5, 1, 1, 1);

        cursorLayout = new QWidget(centralWidget);
        cursorLayout->setObjectName(QStringLiteral("cursorLayout"));
        gridLayout_4 = new QGridLayout(cursorLayout);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        staticCursorLabel = new QLabel(cursorLayout);
        staticCursorLabel->setObjectName(QStringLiteral("staticCursorLabel"));
        staticCursorLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(staticCursorLabel, 0, 0, 1, 1);

        cursorWidget = new CursorDisplayWidget(cursorLayout);
        cursorWidget->setObjectName(QStringLiteral("cursorWidget"));
        cursorWidget->setMinimumSize(QSize(32, 32));
        cursorWidget->setMaximumSize(QSize(32, 32));

        gridLayout_4->addWidget(cursorWidget, 1, 0, 1, 1);


        gridLayout_5->addWidget(cursorLayout, 0, 1, 1, 1);

        robotsLayout = new QWidget(centralWidget);
        robotsLayout->setObjectName(QStringLiteral("robotsLayout"));
        robotLayout = new QGridLayout(robotsLayout);
        robotLayout->setSpacing(3);
        robotLayout->setContentsMargins(11, 11, 11, 11);
        robotLayout->setObjectName(QStringLiteral("robotLayout"));
        robotLayout->setContentsMargins(6, 6, 6, 6);
        followerButton = new QPushButton(robotsLayout);
        followerButton->setObjectName(QStringLiteral("followerButton"));
        followerButton->setMinimumSize(QSize(30, 30));
        followerButton->setMaximumSize(QSize(30, 30));
        followerButton->setIconSize(QSize(32, 32));

        robotLayout->addWidget(followerButton, 3, 1, 1, 1);

        patchbotButton = new QPushButton(robotsLayout);
        patchbotButton->setObjectName(QStringLiteral("patchbotButton"));
        patchbotButton->setMinimumSize(QSize(30, 30));
        patchbotButton->setMaximumSize(QSize(30, 30));
        patchbotButton->setIconSize(QSize(32, 32));

        robotLayout->addWidget(patchbotButton, 1, 0, 1, 1);

        hunterButton = new QPushButton(robotsLayout);
        hunterButton->setObjectName(QStringLiteral("hunterButton"));
        hunterButton->setMinimumSize(QSize(30, 30));
        hunterButton->setMaximumSize(QSize(30, 30));
        hunterButton->setIconSize(QSize(32, 32));

        robotLayout->addWidget(hunterButton, 4, 0, 1, 1);

        swimmerButton = new QPushButton(robotsLayout);
        swimmerButton->setObjectName(QStringLiteral("swimmerButton"));
        swimmerButton->setMinimumSize(QSize(30, 30));
        swimmerButton->setMaximumSize(QSize(30, 30));
        swimmerButton->setIconSize(QSize(32, 32));

        robotLayout->addWidget(swimmerButton, 3, 0, 1, 1);

        staticRobotsLabel = new QLabel(robotsLayout);
        staticRobotsLabel->setObjectName(QStringLiteral("staticRobotsLabel"));
        staticRobotsLabel->setAlignment(Qt::AlignCenter);

        robotLayout->addWidget(staticRobotsLabel, 0, 0, 1, 2);

        diggerButton = new QPushButton(robotsLayout);
        diggerButton->setObjectName(QStringLiteral("diggerButton"));
        diggerButton->setMinimumSize(QSize(30, 30));
        diggerButton->setMaximumSize(QSize(30, 30));
        diggerButton->setIconSize(QSize(32, 32));

        robotLayout->addWidget(diggerButton, 2, 1, 1, 1);

        snifferButton = new QPushButton(robotsLayout);
        snifferButton->setObjectName(QStringLiteral("snifferButton"));
        snifferButton->setMinimumSize(QSize(30, 30));
        snifferButton->setMaximumSize(QSize(30, 30));
        snifferButton->setIconSize(QSize(32, 32));

        robotLayout->addWidget(snifferButton, 4, 1, 1, 1);

        pusherButton = new QPushButton(robotsLayout);
        pusherButton->setObjectName(QStringLiteral("pusherButton"));
        pusherButton->setMinimumSize(QSize(30, 30));
        pusherButton->setMaximumSize(QSize(30, 30));
        pusherButton->setIconSize(QSize(32, 32));

        robotLayout->addWidget(pusherButton, 2, 0, 1, 1);

        buggerButton = new QPushButton(robotsLayout);
        buggerButton->setObjectName(QStringLiteral("buggerButton"));
        buggerButton->setMinimumSize(QSize(30, 30));
        buggerButton->setMaximumSize(QSize(30, 30));
        buggerButton->setIconSize(QSize(32, 32));

        robotLayout->addWidget(buggerButton, 1, 1, 1, 1);


        gridLayout_5->addWidget(robotsLayout, 4, 1, 1, 1);

        environmentLayout = new QWidget(centralWidget);
        environmentLayout->setObjectName(QStringLiteral("environmentLayout"));
        sadf = new QGridLayout(environmentLayout);
        sadf->setSpacing(3);
        sadf->setContentsMargins(11, 11, 11, 11);
        sadf->setObjectName(QStringLiteral("sadf"));
        sadf->setContentsMargins(6, 6, 6, 6);
        alienGrassButton = new QPushButton(environmentLayout);
        alienGrassButton->setObjectName(QStringLiteral("alienGrassButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(alienGrassButton->sizePolicy().hasHeightForWidth());
        alienGrassButton->setSizePolicy(sizePolicy);
        alienGrassButton->setMinimumSize(QSize(32, 32));
        alienGrassButton->setMaximumSize(QSize(32, 32));
        alienGrassButton->setBaseSize(QSize(32, 32));
        alienGrassButton->setIconSize(QSize(32, 32));

        sadf->addWidget(alienGrassButton, 3, 1, 1, 1);

        gravelButton = new QPushButton(environmentLayout);
        gravelButton->setObjectName(QStringLiteral("gravelButton"));
        sizePolicy.setHeightForWidth(gravelButton->sizePolicy().hasHeightForWidth());
        gravelButton->setSizePolicy(sizePolicy);
        gravelButton->setMinimumSize(QSize(32, 32));
        gravelButton->setMaximumSize(QSize(32, 32));
        gravelButton->setBaseSize(QSize(32, 32));
        gravelButton->setIconSize(QSize(32, 32));

        sadf->addWidget(gravelButton, 4, 0, 1, 1);

        rootServerButton = new QPushButton(environmentLayout);
        rootServerButton->setObjectName(QStringLiteral("rootServerButton"));
        sizePolicy.setHeightForWidth(rootServerButton->sizePolicy().hasHeightForWidth());
        rootServerButton->setSizePolicy(sizePolicy);
        rootServerButton->setMinimumSize(QSize(32, 32));
        rootServerButton->setMaximumSize(QSize(32, 32));
        rootServerButton->setBaseSize(QSize(32, 32));
        rootServerButton->setIconSize(QSize(32, 32));

        sadf->addWidget(rootServerButton, 3, 0, 1, 1);

        abyssButton = new QPushButton(environmentLayout);
        abyssButton->setObjectName(QStringLiteral("abyssButton"));
        sizePolicy.setHeightForWidth(abyssButton->sizePolicy().hasHeightForWidth());
        abyssButton->setSizePolicy(sizePolicy);
        abyssButton->setMinimumSize(QSize(32, 32));
        abyssButton->setMaximumSize(QSize(32, 32));
        abyssButton->setBaseSize(QSize(32, 32));
        abyssButton->setIconSize(QSize(32, 32));

        sadf->addWidget(abyssButton, 2, 0, 1, 1);

        secretEntranceButton = new QPushButton(environmentLayout);
        secretEntranceButton->setObjectName(QStringLiteral("secretEntranceButton"));
        sizePolicy.setHeightForWidth(secretEntranceButton->sizePolicy().hasHeightForWidth());
        secretEntranceButton->setSizePolicy(sizePolicy);
        secretEntranceButton->setMinimumSize(QSize(32, 32));
        secretEntranceButton->setMaximumSize(QSize(32, 32));
        secretEntranceButton->setBaseSize(QSize(32, 32));
        secretEntranceButton->setIconSize(QSize(32, 32));

        sadf->addWidget(secretEntranceButton, 4, 1, 1, 1);

        manualDoorButton = new QPushButton(environmentLayout);
        manualDoorButton->setObjectName(QStringLiteral("manualDoorButton"));
        sizePolicy.setHeightForWidth(manualDoorButton->sizePolicy().hasHeightForWidth());
        manualDoorButton->setSizePolicy(sizePolicy);
        manualDoorButton->setMinimumSize(QSize(32, 32));
        manualDoorButton->setMaximumSize(QSize(32, 32));
        manualDoorButton->setBaseSize(QSize(32, 32));
        manualDoorButton->setIconSize(QSize(32, 32));

        sadf->addWidget(manualDoorButton, 5, 0, 1, 1);

        steelplanksButton = new QPushButton(environmentLayout);
        steelplanksButton->setObjectName(QStringLiteral("steelplanksButton"));
        sizePolicy.setHeightForWidth(steelplanksButton->sizePolicy().hasHeightForWidth());
        steelplanksButton->setSizePolicy(sizePolicy);
        steelplanksButton->setMinimumSize(QSize(32, 32));
        steelplanksButton->setMaximumSize(QSize(32, 32));
        steelplanksButton->setBaseSize(QSize(32, 32));
        steelplanksButton->setIconSize(QSize(32, 32));

        sadf->addWidget(steelplanksButton, 1, 1, 1, 1);

        staticEnvironmentLabel = new QLabel(environmentLayout);
        staticEnvironmentLabel->setObjectName(QStringLiteral("staticEnvironmentLabel"));
        staticEnvironmentLabel->setAlignment(Qt::AlignCenter);

        sadf->addWidget(staticEnvironmentLabel, 0, 0, 1, 2);

        resetButton = new QPushButton(environmentLayout);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        sizePolicy.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy);
        resetButton->setMinimumSize(QSize(32, 32));
        resetButton->setMaximumSize(QSize(32, 32));
        resetButton->setBaseSize(QSize(32, 32));
        resetButton->setIconSize(QSize(32, 32));

        sadf->addWidget(resetButton, 1, 0, 1, 1);

        waterButton = new QPushButton(environmentLayout);
        waterButton->setObjectName(QStringLiteral("waterButton"));
        sizePolicy.setHeightForWidth(waterButton->sizePolicy().hasHeightForWidth());
        waterButton->setSizePolicy(sizePolicy);
        waterButton->setMinimumSize(QSize(32, 32));
        waterButton->setMaximumSize(QSize(32, 32));
        waterButton->setBaseSize(QSize(32, 32));
        waterButton->setIconSize(QSize(32, 32));

        sadf->addWidget(waterButton, 2, 1, 1, 1);

        destructibleWallButton = new QPushButton(environmentLayout);
        destructibleWallButton->setObjectName(QStringLiteral("destructibleWallButton"));
        destructibleWallButton->setMinimumSize(QSize(32, 32));
        destructibleWallButton->setMaximumSize(QSize(32, 32));
        destructibleWallButton->setIconSize(QSize(32, 32));

        sadf->addWidget(destructibleWallButton, 6, 1, 1, 1);

        autoDoorButton = new QPushButton(environmentLayout);
        autoDoorButton->setObjectName(QStringLiteral("autoDoorButton"));
        sizePolicy.setHeightForWidth(autoDoorButton->sizePolicy().hasHeightForWidth());
        autoDoorButton->setSizePolicy(sizePolicy);
        autoDoorButton->setMinimumSize(QSize(32, 32));
        autoDoorButton->setMaximumSize(QSize(32, 32));
        autoDoorButton->setBaseSize(QSize(32, 32));
        autoDoorButton->setIconSize(QSize(32, 32));

        sadf->addWidget(autoDoorButton, 5, 1, 1, 1);

        indestructibleWallButton = new QPushButton(environmentLayout);
        indestructibleWallButton->setObjectName(QStringLiteral("indestructibleWallButton"));
        sizePolicy.setHeightForWidth(indestructibleWallButton->sizePolicy().hasHeightForWidth());
        indestructibleWallButton->setSizePolicy(sizePolicy);
        indestructibleWallButton->setMinimumSize(QSize(32, 32));
        indestructibleWallButton->setMaximumSize(QSize(32, 32));
        indestructibleWallButton->setBaseSize(QSize(32, 32));
        indestructibleWallButton->setIconSize(QSize(32, 32));

        sadf->addWidget(indestructibleWallButton, 6, 0, 1, 1);


        gridLayout_5->addWidget(environmentLayout, 2, 1, 1, 1);

        editorLayout = new QWidget(centralWidget);
        editorLayout->setObjectName(QStringLiteral("editorLayout"));
        asdf = new QGridLayout(editorLayout);
        asdf->setSpacing(0);
        asdf->setContentsMargins(11, 11, 11, 11);
        asdf->setObjectName(QStringLiteral("asdf"));
        asdf->setContentsMargins(0, 0, 0, 0);
        mapRenderWidget = new RenderWidget(editorLayout);
        mapRenderWidget->setObjectName(QStringLiteral("mapRenderWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(mapRenderWidget->sizePolicy().hasHeightForWidth());
        mapRenderWidget->setSizePolicy(sizePolicy1);

        asdf->addWidget(mapRenderWidget, 0, 0, 1, 1);

        editorXScrollbar = new QScrollBar(editorLayout);
        editorXScrollbar->setObjectName(QStringLiteral("editorXScrollbar"));
        editorXScrollbar->setOrientation(Qt::Horizontal);

        asdf->addWidget(editorXScrollbar, 1, 0, 1, 1);

        editorYScrollbar = new QScrollBar(editorLayout);
        editorYScrollbar->setObjectName(QStringLiteral("editorYScrollbar"));
        editorYScrollbar->setOrientation(Qt::Vertical);

        asdf->addWidget(editorYScrollbar, 0, 1, 1, 1);


        gridLayout_5->addWidget(editorLayout, 0, 0, 6, 1);

        MapEditorGUIClass->setCentralWidget(centralWidget);
        environmentLayout->raise();
        editorLayout->raise();
        cursorLayout->raise();
        robotsLayout->raise();
        menuBar = new QMenuBar(MapEditorGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MapEditorGUIClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(newMapAction);
        menuFile->addAction(openMapAction);
        menuFile->addSeparator();
        menuFile->addAction(saveMapAction);
        menuAbout->addAction(reportBugAction);
        menuAbout->addAction(aboutAction);

        retranslateUi(MapEditorGUIClass);

        QMetaObject::connectSlotsByName(MapEditorGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *MapEditorGUIClass)
    {
        MapEditorGUIClass->setWindowTitle(QApplication::translate("MapEditorGUIClass", "MapEditorGUI", Q_NULLPTR));
        newMapAction->setText(QApplication::translate("MapEditorGUIClass", "New", Q_NULLPTR));
        openMapAction->setText(QApplication::translate("MapEditorGUIClass", "Open", Q_NULLPTR));
        saveMapAction->setText(QApplication::translate("MapEditorGUIClass", "Save", Q_NULLPTR));
        aboutAction->setText(QApplication::translate("MapEditorGUIClass", "About Patchbot Mapcreator", Q_NULLPTR));
        reportBugAction->setText(QApplication::translate("MapEditorGUIClass", "Report Bug", Q_NULLPTR));
        staticCursorLabel->setText(QApplication::translate("MapEditorGUIClass", "Cursor", Q_NULLPTR));
        followerButton->setText(QString());
        patchbotButton->setText(QString());
        hunterButton->setText(QString());
        swimmerButton->setText(QString());
        staticRobotsLabel->setText(QApplication::translate("MapEditorGUIClass", "Robots", Q_NULLPTR));
        diggerButton->setText(QString());
        snifferButton->setText(QString());
        pusherButton->setText(QString());
        buggerButton->setText(QString());
        alienGrassButton->setText(QString());
        gravelButton->setText(QString());
        rootServerButton->setText(QString());
        abyssButton->setText(QString());
        secretEntranceButton->setText(QString());
        manualDoorButton->setText(QString());
        steelplanksButton->setText(QString());
        staticEnvironmentLabel->setText(QApplication::translate("MapEditorGUIClass", "Environment", Q_NULLPTR));
        resetButton->setText(QApplication::translate("MapEditorGUIClass", "R", Q_NULLPTR));
        waterButton->setText(QString());
        destructibleWallButton->setText(QString());
        autoDoorButton->setText(QString());
        indestructibleWallButton->setText(QString());
        menuFile->setTitle(QApplication::translate("MapEditorGUIClass", "File", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MapEditorGUIClass", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MapEditorGUIClass: public Ui_MapEditorGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPEDITORGUI_H
