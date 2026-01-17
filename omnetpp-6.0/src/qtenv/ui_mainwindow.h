/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionOneStep;
    QAction *actionRun;
    QAction *actionSetUpConfiguration;
    QAction *actionStop;
    QAction *actionFastRun;
    QAction *actionExpressRun;
    QAction *actionRunUntil;
    QAction *actionLoadNedFile;
    QAction *actionConcludeSimulation;
    QAction *actionEventlogRecording;
    QAction *actionFindInspectObjects;
    QAction *actionVerticalLayout;
    QAction *actionHorizontalLayout;
    QAction *actionTimeline;
    QAction *actionPreferences;
    QAction *actionSetUpUnconfiguredNetwork;
    QAction *actionOpenPrimaryIniFile;
    QAction *actionCreate_Snapshot;
    QAction *actionDebugNextEvent;
    QAction *actionRebuildNetwork;
    QAction *actionNetwork;
    QAction *actionScheduledEvents;
    QAction *actionSimulation;
    QAction *actionNedComponentTypes;
    QAction *actionRegisteredClasses;
    QAction *actionNED_Functions;
    QAction *actionRegistered_Enums;
    QAction *actionSupportedConfigurationOption;
    QAction *actionInspectByPointer;
    QAction *actionStatusDetails;
    QAction *actionFlipWindowLayout;
    QAction *actionAbout_OMNeT_Qtenv;
    QAction *actionRecordVideo;
    QAction *actionShowAnimationParams;
    QAction *actionDebugOnErrors;
    QAction *actionClassDescriptors;
    QAction *actionResultFilters;
    QAction *actionResultRecorders;
    QAction *actionMessagePrinters;
    QAction *actionDebugNow;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *toolBarArea;
    QHBoxLayout *topStatusRow;
    QLabel *nextEventLabel;
    QLabel *nextModuleLabel;
    QLabel *nextTimeLabel;
    QSplitter *mainSplitter;
    QWidget *timeLine;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QWidget *treeView;
    QWidget *objectInspector;
    QSplitter *splitter_2;
    QWidget *mainArea;
    QWidget *logInspector;
    QHBoxLayout *statusBar;
    QLabel *labelConfigName;
    QLabel *labelMessageStats;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSimulate;
    QMenu *menuInspect;
    QMenu *menuAvailable_Components;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(939, 673);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/logo128m"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("this is overwritten by Qtenv after instantiation"));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionQuit->setShortcutContext(Qt::ApplicationShortcut);
        actionOneStep = new QAction(MainWindow);
        actionOneStep->setObjectName(QString::fromUtf8("actionOneStep"));
        actionOneStep->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/tools/step"), QSize(), QIcon::Normal, QIcon::Off);
        actionOneStep->setIcon(icon1);
        actionOneStep->setShortcutContext(Qt::ApplicationShortcut);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QString::fromUtf8("actionRun"));
        actionRun->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/tools/run"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon2);
        actionRun->setShortcutContext(Qt::ApplicationShortcut);
        actionSetUpConfiguration = new QAction(MainWindow);
        actionSetUpConfiguration->setObjectName(QString::fromUtf8("actionSetUpConfiguration"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/tools/newrun"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetUpConfiguration->setIcon(icon3);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/tools/stop"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon4);
        actionStop->setShortcutContext(Qt::ApplicationShortcut);
        actionFastRun = new QAction(MainWindow);
        actionFastRun->setObjectName(QString::fromUtf8("actionFastRun"));
        actionFastRun->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/tools/fast"), QSize(), QIcon::Normal, QIcon::Off);
        actionFastRun->setIcon(icon5);
        actionFastRun->setShortcutContext(Qt::ApplicationShortcut);
        actionExpressRun = new QAction(MainWindow);
        actionExpressRun->setObjectName(QString::fromUtf8("actionExpressRun"));
        actionExpressRun->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/tools/express"), QSize(), QIcon::Normal, QIcon::Off);
        actionExpressRun->setIcon(icon6);
        actionExpressRun->setShortcutContext(Qt::ApplicationShortcut);
        actionRunUntil = new QAction(MainWindow);
        actionRunUntil->setObjectName(QString::fromUtf8("actionRunUntil"));
        actionRunUntil->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/tools/until"), QSize(), QIcon::Normal, QIcon::Off);
        actionRunUntil->setIcon(icon7);
        actionRunUntil->setShortcutContext(Qt::ApplicationShortcut);
        actionLoadNedFile = new QAction(MainWindow);
        actionLoadNedFile->setObjectName(QString::fromUtf8("actionLoadNedFile"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/tools/loadned"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadNedFile->setIcon(icon8);
        actionConcludeSimulation = new QAction(MainWindow);
        actionConcludeSimulation->setObjectName(QString::fromUtf8("actionConcludeSimulation"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/tools/finish"), QSize(), QIcon::Normal, QIcon::Off);
        actionConcludeSimulation->setIcon(icon9);
        actionEventlogRecording = new QAction(MainWindow);
        actionEventlogRecording->setObjectName(QString::fromUtf8("actionEventlogRecording"));
        actionEventlogRecording->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/tools/recordeventlog"), QSize(), QIcon::Normal, QIcon::Off);
        actionEventlogRecording->setIcon(icon10);
        actionFindInspectObjects = new QAction(MainWindow);
        actionFindInspectObjects->setObjectName(QString::fromUtf8("actionFindInspectObjects"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/tools/findobj"), QSize(), QIcon::Normal, QIcon::Off);
        actionFindInspectObjects->setIcon(icon11);
        actionVerticalLayout = new QAction(MainWindow);
        actionVerticalLayout->setObjectName(QString::fromUtf8("actionVerticalLayout"));
        actionVerticalLayout->setCheckable(true);
        actionVerticalLayout->setChecked(false);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/tools/vertical"), QSize(), QIcon::Normal, QIcon::Off);
        actionVerticalLayout->setIcon(icon12);
        actionHorizontalLayout = new QAction(MainWindow);
        actionHorizontalLayout->setObjectName(QString::fromUtf8("actionHorizontalLayout"));
        actionHorizontalLayout->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/tools/horizontal"), QSize(), QIcon::Normal, QIcon::Off);
        actionHorizontalLayout->setIcon(icon13);
        actionTimeline = new QAction(MainWindow);
        actionTimeline->setObjectName(QString::fromUtf8("actionTimeline"));
        actionTimeline->setCheckable(true);
        actionTimeline->setChecked(false);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/tools/fes"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimeline->setIcon(icon14);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/tools/config"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon15);
        actionSetUpUnconfiguredNetwork = new QAction(MainWindow);
        actionSetUpUnconfiguredNetwork->setObjectName(QString::fromUtf8("actionSetUpUnconfiguredNetwork"));
        actionOpenPrimaryIniFile = new QAction(MainWindow);
        actionOpenPrimaryIniFile->setObjectName(QString::fromUtf8("actionOpenPrimaryIniFile"));
        actionCreate_Snapshot = new QAction(MainWindow);
        actionCreate_Snapshot->setObjectName(QString::fromUtf8("actionCreate_Snapshot"));
        actionDebugNextEvent = new QAction(MainWindow);
        actionDebugNextEvent->setObjectName(QString::fromUtf8("actionDebugNextEvent"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/tools/debugnextevent"), QSize(), QIcon::Normal, QIcon::Off);
        actionDebugNextEvent->setIcon(icon16);
        actionRebuildNetwork = new QAction(MainWindow);
        actionRebuildNetwork->setObjectName(QString::fromUtf8("actionRebuildNetwork"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/tools/rebuild"), QSize(), QIcon::Normal, QIcon::Off);
        actionRebuildNetwork->setIcon(icon17);
        actionNetwork = new QAction(MainWindow);
        actionNetwork->setObjectName(QString::fromUtf8("actionNetwork"));
        actionScheduledEvents = new QAction(MainWindow);
        actionScheduledEvents->setObjectName(QString::fromUtf8("actionScheduledEvents"));
        actionSimulation = new QAction(MainWindow);
        actionSimulation->setObjectName(QString::fromUtf8("actionSimulation"));
        actionNedComponentTypes = new QAction(MainWindow);
        actionNedComponentTypes->setObjectName(QString::fromUtf8("actionNedComponentTypes"));
        actionRegisteredClasses = new QAction(MainWindow);
        actionRegisteredClasses->setObjectName(QString::fromUtf8("actionRegisteredClasses"));
        actionNED_Functions = new QAction(MainWindow);
        actionNED_Functions->setObjectName(QString::fromUtf8("actionNED_Functions"));
        actionRegistered_Enums = new QAction(MainWindow);
        actionRegistered_Enums->setObjectName(QString::fromUtf8("actionRegistered_Enums"));
        actionSupportedConfigurationOption = new QAction(MainWindow);
        actionSupportedConfigurationOption->setObjectName(QString::fromUtf8("actionSupportedConfigurationOption"));
        actionInspectByPointer = new QAction(MainWindow);
        actionInspectByPointer->setObjectName(QString::fromUtf8("actionInspectByPointer"));
        actionStatusDetails = new QAction(MainWindow);
        actionStatusDetails->setObjectName(QString::fromUtf8("actionStatusDetails"));
        actionStatusDetails->setCheckable(true);
        actionFlipWindowLayout = new QAction(MainWindow);
        actionFlipWindowLayout->setObjectName(QString::fromUtf8("actionFlipWindowLayout"));
        actionAbout_OMNeT_Qtenv = new QAction(MainWindow);
        actionAbout_OMNeT_Qtenv->setObjectName(QString::fromUtf8("actionAbout_OMNeT_Qtenv"));
        actionRecordVideo = new QAction(MainWindow);
        actionRecordVideo->setObjectName(QString::fromUtf8("actionRecordVideo"));
        actionRecordVideo->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/tools/recordvideo"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecordVideo->setIcon(icon18);
        actionShowAnimationParams = new QAction(MainWindow);
        actionShowAnimationParams->setObjectName(QString::fromUtf8("actionShowAnimationParams"));
        actionShowAnimationParams->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/tools/props"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowAnimationParams->setIcon(icon19);
        actionDebugOnErrors = new QAction(MainWindow);
        actionDebugOnErrors->setObjectName(QString::fromUtf8("actionDebugOnErrors"));
        actionDebugOnErrors->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/tools/debugger"), QSize(), QIcon::Normal, QIcon::Off);
        actionDebugOnErrors->setIcon(icon20);
        actionClassDescriptors = new QAction(MainWindow);
        actionClassDescriptors->setObjectName(QString::fromUtf8("actionClassDescriptors"));
        actionResultFilters = new QAction(MainWindow);
        actionResultFilters->setObjectName(QString::fromUtf8("actionResultFilters"));
        actionResultRecorders = new QAction(MainWindow);
        actionResultRecorders->setObjectName(QString::fromUtf8("actionResultRecorders"));
        actionMessagePrinters = new QAction(MainWindow);
        actionMessagePrinters->setObjectName(QString::fromUtf8("actionMessagePrinters"));
        actionDebugNow = new QAction(MainWindow);
        actionDebugNow->setObjectName(QString::fromUtf8("actionDebugNow"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 6, 6);
        toolBarArea = new QWidget(centralWidget);
        toolBarArea->setObjectName(QString::fromUtf8("toolBarArea"));

        verticalLayout->addWidget(toolBarArea);

        topStatusRow = new QHBoxLayout();
        topStatusRow->setSpacing(1);
        topStatusRow->setObjectName(QString::fromUtf8("topStatusRow"));
        nextEventLabel = new QLabel(centralWidget);
        nextEventLabel->setObjectName(QString::fromUtf8("nextEventLabel"));
        nextEventLabel->setStyleSheet(QString::fromUtf8("QLabel { border: 1px solid palette(mid); }"));
        nextEventLabel->setMargin(1);

        topStatusRow->addWidget(nextEventLabel);

        nextModuleLabel = new QLabel(centralWidget);
        nextModuleLabel->setObjectName(QString::fromUtf8("nextModuleLabel"));
        nextModuleLabel->setStyleSheet(QString::fromUtf8("QLabel { border: 1px solid palette(mid); }"));
        nextModuleLabel->setMargin(1);

        topStatusRow->addWidget(nextModuleLabel);

        nextTimeLabel = new QLabel(centralWidget);
        nextTimeLabel->setObjectName(QString::fromUtf8("nextTimeLabel"));
        nextTimeLabel->setStyleSheet(QString::fromUtf8("QLabel { border: 1px solid palette(mid); }"));
        nextTimeLabel->setMargin(1);

        topStatusRow->addWidget(nextTimeLabel);


        verticalLayout->addLayout(topStatusRow);

        mainSplitter = new QSplitter(centralWidget);
        mainSplitter->setObjectName(QString::fromUtf8("mainSplitter"));
        mainSplitter->setOrientation(Qt::Vertical);
        timeLine = new QWidget(mainSplitter);
        timeLine->setObjectName(QString::fromUtf8("timeLine"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(timeLine->sizePolicy().hasHeightForWidth());
        timeLine->setSizePolicy(sizePolicy1);
        mainSplitter->addWidget(timeLine);
        splitter_3 = new QSplitter(mainSplitter);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        sizePolicy.setHeightForWidth(splitter_3->sizePolicy().hasHeightForWidth());
        splitter_3->setSizePolicy(sizePolicy);
        splitter_3->setMinimumSize(QSize(100, 100));
        splitter_3->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setMinimumSize(QSize(100, 100));
        splitter->setOrientation(Qt::Vertical);
        treeView = new QWidget(splitter);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy2);
        treeView->setMinimumSize(QSize(100, 100));
        treeView->setContextMenuPolicy(Qt::CustomContextMenu);
        splitter->addWidget(treeView);
        objectInspector = new QWidget(splitter);
        objectInspector->setObjectName(QString::fromUtf8("objectInspector"));
        sizePolicy2.setHeightForWidth(objectInspector->sizePolicy().hasHeightForWidth());
        objectInspector->setSizePolicy(sizePolicy2);
        objectInspector->setMinimumSize(QSize(100, 100));
        splitter->addWidget(objectInspector);
        splitter_3->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setMinimumSize(QSize(100, 100));
        splitter_2->setOrientation(Qt::Vertical);
        mainArea = new QWidget(splitter_2);
        mainArea->setObjectName(QString::fromUtf8("mainArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mainArea->sizePolicy().hasHeightForWidth());
        mainArea->setSizePolicy(sizePolicy3);
        mainArea->setMinimumSize(QSize(100, 100));
        splitter_2->addWidget(mainArea);
        logInspector = new QWidget(splitter_2);
        logInspector->setObjectName(QString::fromUtf8("logInspector"));
        sizePolicy2.setHeightForWidth(logInspector->sizePolicy().hasHeightForWidth());
        logInspector->setSizePolicy(sizePolicy2);
        logInspector->setMinimumSize(QSize(100, 100));
        splitter_2->addWidget(logInspector);
        splitter_3->addWidget(splitter_2);
        mainSplitter->addWidget(splitter_3);

        verticalLayout->addWidget(mainSplitter);

        statusBar = new QHBoxLayout();
        statusBar->setSpacing(1);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        labelConfigName = new QLabel(centralWidget);
        labelConfigName->setObjectName(QString::fromUtf8("labelConfigName"));
        labelConfigName->setStyleSheet(QString::fromUtf8("QLabel { border: 1px solid palette(mid); }"));
        labelConfigName->setMargin(1);

        statusBar->addWidget(labelConfigName);

        labelMessageStats = new QLabel(centralWidget);
        labelMessageStats->setObjectName(QString::fromUtf8("labelMessageStats"));
        labelMessageStats->setStyleSheet(QString::fromUtf8("QLabel { border: 1px solid palette(mid); }"));
        labelMessageStats->setMargin(1);

        statusBar->addWidget(labelMessageStats);


        verticalLayout->addLayout(statusBar);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 939, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSimulate = new QMenu(menuBar);
        menuSimulate->setObjectName(QString::fromUtf8("menuSimulate"));
        menuInspect = new QMenu(menuBar);
        menuInspect->setObjectName(QString::fromUtf8("menuInspect"));
        menuAvailable_Components = new QMenu(menuInspect);
        menuAvailable_Components->setObjectName(QString::fromUtf8("menuAvailable_Components"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setContextMenuPolicy(Qt::NoContextMenu);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::TopToolBarArea);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSimulate->menuAction());
        menuBar->addAction(menuInspect->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSetUpConfiguration);
        menuFile->addSeparator();
        menuFile->addAction(actionLoadNedFile);
        menuFile->addAction(actionSetUpUnconfiguredNetwork);
        menuFile->addSeparator();
        menuFile->addAction(actionOpenPrimaryIniFile);
        menuFile->addSeparator();
        menuFile->addAction(actionCreate_Snapshot);
        menuFile->addSeparator();
        menuFile->addAction(actionPreferences);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuSimulate->addAction(actionOneStep);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionRun);
        menuSimulate->addAction(actionFastRun);
        menuSimulate->addAction(actionExpressRun);
        menuSimulate->addAction(actionRunUntil);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionDebugNow);
        menuSimulate->addAction(actionDebugNextEvent);
        menuSimulate->addAction(actionDebugOnErrors);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionStop);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionEventlogRecording);
        menuSimulate->addAction(actionRecordVideo);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionConcludeSimulation);
        menuSimulate->addAction(actionRebuildNetwork);
        menuInspect->addAction(actionNetwork);
        menuInspect->addAction(actionScheduledEvents);
        menuInspect->addAction(actionSimulation);
        menuInspect->addSeparator();
        menuInspect->addAction(menuAvailable_Components->menuAction());
        menuInspect->addSeparator();
        menuInspect->addAction(actionFindInspectObjects);
        menuInspect->addAction(actionInspectByPointer);
        menuAvailable_Components->addAction(actionNedComponentTypes);
        menuAvailable_Components->addAction(actionRegisteredClasses);
        menuAvailable_Components->addAction(actionClassDescriptors);
        menuAvailable_Components->addAction(actionNED_Functions);
        menuAvailable_Components->addAction(actionRegistered_Enums);
        menuAvailable_Components->addAction(actionSupportedConfigurationOption);
        menuAvailable_Components->addAction(actionResultFilters);
        menuAvailable_Components->addAction(actionResultRecorders);
        menuAvailable_Components->addAction(actionMessagePrinters);
        menuView->addAction(actionStatusDetails);
        menuView->addAction(actionTimeline);
        menuView->addAction(actionShowAnimationParams);
        menuView->addSeparator();
        menuView->addAction(actionFlipWindowLayout);
        menuView->addSeparator();
        menuHelp->addAction(actionAbout_OMNeT_Qtenv);
        mainToolBar->addAction(actionSetUpConfiguration);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOneStep);
        mainToolBar->addAction(actionRun);
        mainToolBar->addAction(actionFastRun);
        mainToolBar->addAction(actionExpressRun);
        mainToolBar->addAction(actionRunUntil);
        mainToolBar->addAction(actionStop);
        mainToolBar->addAction(actionDebugNextEvent);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionConcludeSimulation);
        mainToolBar->addAction(actionRebuildNetwork);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionEventlogRecording);
        mainToolBar->addAction(actionDebugOnErrors);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFindInspectObjects);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionVerticalLayout);
        mainToolBar->addAction(actionHorizontalLayout);
        mainToolBar->addAction(actionTimeline);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPreferences);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRecordVideo);
        mainToolBar->addAction(actionShowAnimationParams);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "OMNeT++ Qtenv", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOneStep->setText(QCoreApplication::translate("MainWindow", "&Step", nullptr));
#if QT_CONFIG(tooltip)
        actionOneStep->setToolTip(QCoreApplication::translate("MainWindow", "Step: Do one event with animation (F4)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOneStep->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRun->setText(QCoreApplication::translate("MainWindow", "&Run", nullptr));
#if QT_CONFIG(tooltip)
        actionRun->setToolTip(QCoreApplication::translate("MainWindow", "Run with full animation (F5)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRun->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetUpConfiguration->setText(QCoreApplication::translate("MainWindow", "&Set Up a Configuration...", nullptr));
#if QT_CONFIG(tooltip)
        actionSetUpConfiguration->setToolTip(QCoreApplication::translate("MainWindow", "Set up an inifile configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStop->setText(QCoreApplication::translate("MainWindow", "S&top Execution", nullptr));
#if QT_CONFIG(tooltip)
        actionStop->setToolTip(QCoreApplication::translate("MainWindow", "Stop running simulation (F8)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionStop->setShortcut(QCoreApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFastRun->setText(QCoreApplication::translate("MainWindow", "&Fast Run (rare display updates)", nullptr));
#if QT_CONFIG(tooltip)
        actionFastRun->setToolTip(QCoreApplication::translate("MainWindow", "Fast Run: no animation, rare inspector updates (F6)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFastRun->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExpressRun->setText(QCoreApplication::translate("MainWindow", "E&xpress Run (tracing off)", nullptr));
#if QT_CONFIG(tooltip)
        actionExpressRun->setToolTip(QCoreApplication::translate("MainWindow", "Express Run: no log, animation, or inspector updates (F7)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExpressRun->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRunUntil->setText(QCoreApplication::translate("MainWindow", "Run &Until...", nullptr));
#if QT_CONFIG(tooltip)
        actionRunUntil->setToolTip(QCoreApplication::translate("MainWindow", "Run until time or event number (Ctrl+F5)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRunUntil->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoadNedFile->setText(QCoreApplication::translate("MainWindow", "&Load NED File...", nullptr));
#if QT_CONFIG(tooltip)
        actionLoadNedFile->setToolTip(QCoreApplication::translate("MainWindow", "Load NED file for compound module definitions", nullptr));
#endif // QT_CONFIG(tooltip)
        actionConcludeSimulation->setText(QCoreApplication::translate("MainWindow", "&Conclude Simulation", nullptr));
#if QT_CONFIG(tooltip)
        actionConcludeSimulation->setToolTip(QCoreApplication::translate("MainWindow", "Conclude simulation", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEventlogRecording->setText(QCoreApplication::translate("MainWindow", "&Eventlog Recording", nullptr));
#if QT_CONFIG(tooltip)
        actionEventlogRecording->setToolTip(QCoreApplication::translate("MainWindow", "Eventlog recording on/off (Ctrl+G)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEventlogRecording->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFindInspectObjects->setText(QCoreApplication::translate("MainWindow", "&Find/Inspect Objects...", nullptr));
#if QT_CONFIG(tooltip)
        actionFindInspectObjects->setToolTip(QCoreApplication::translate("MainWindow", "Find and inspect modules, messages, queues and other objects (Ctrl+S)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFindInspectObjects->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVerticalLayout->setText(QCoreApplication::translate("MainWindow", "Vertical Main Window Layout", nullptr));
#if QT_CONFIG(tooltip)
        actionVerticalLayout->setToolTip(QCoreApplication::translate("MainWindow", "Vertical main window layout", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHorizontalLayout->setText(QCoreApplication::translate("MainWindow", "Horizontal Main Window Layout", nullptr));
        actionTimeline->setText(QCoreApplication::translate("MainWindow", "&Timeline", nullptr));
#if QT_CONFIG(tooltip)
        actionTimeline->setToolTip(QCoreApplication::translate("MainWindow", "Show/hide timeline (Ctrl+T)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionTimeline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "&Preferences...", nullptr));
        actionSetUpUnconfiguredNetwork->setText(QCoreApplication::translate("MainWindow", "Set Up an &Unconfigured Network...", nullptr));
        actionOpenPrimaryIniFile->setText(QCoreApplication::translate("MainWindow", "Open Primary &Ini File", nullptr));
        actionCreate_Snapshot->setText(QCoreApplication::translate("MainWindow", "&Create Snapshot...", nullptr));
        actionDebugNextEvent->setText(QCoreApplication::translate("MainWindow", "&Debug Next Event", nullptr));
#if QT_CONFIG(shortcut)
        actionDebugNextEvent->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRebuildNetwork->setText(QCoreApplication::translate("MainWindow", "Re&build Network", nullptr));
#if QT_CONFIG(tooltip)
        actionRebuildNetwork->setToolTip(QCoreApplication::translate("MainWindow", "Rebuild network", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRebuildNetwork->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNetwork->setText(QCoreApplication::translate("MainWindow", "&Network", nullptr));
        actionScheduledEvents->setText(QCoreApplication::translate("MainWindow", "Scheduled &Events (FES)", nullptr));
        actionSimulation->setText(QCoreApplication::translate("MainWindow", "&Simulation", nullptr));
        actionNedComponentTypes->setText(QCoreApplication::translate("MainWindow", "NED Component &Types", nullptr));
        actionRegisteredClasses->setText(QCoreApplication::translate("MainWindow", "Registered &Classes", nullptr));
        actionNED_Functions->setText(QCoreApplication::translate("MainWindow", "NED &Functions", nullptr));
        actionRegistered_Enums->setText(QCoreApplication::translate("MainWindow", "Registered &Enums", nullptr));
        actionSupportedConfigurationOption->setText(QCoreApplication::translate("MainWindow", "Supported Configuration &Options", nullptr));
        actionInspectByPointer->setText(QCoreApplication::translate("MainWindow", "Inspect by &Pointer...", nullptr));
        actionStatusDetails->setText(QCoreApplication::translate("MainWindow", "&Status Details", nullptr));
#if QT_CONFIG(shortcut)
        actionStatusDetails->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFlipWindowLayout->setText(QCoreApplication::translate("MainWindow", "&Flip Window Layout", nullptr));
        actionAbout_OMNeT_Qtenv->setText(QCoreApplication::translate("MainWindow", "&About OMNeT++/Qtenv", nullptr));
        actionRecordVideo->setText(QCoreApplication::translate("MainWindow", "&Video Recording", nullptr));
#if QT_CONFIG(tooltip)
        actionRecordVideo->setToolTip(QCoreApplication::translate("MainWindow", "Record Video (Ctrl+M)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRecordVideo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowAnimationParams->setText(QCoreApplication::translate("MainWindow", "Animation Parameters", nullptr));
#if QT_CONFIG(tooltip)
        actionShowAnimationParams->setToolTip(QCoreApplication::translate("MainWindow", "Show Animation Parameters (Ctrl+N)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowAnimationParams->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDebugOnErrors->setText(QCoreApplication::translate("MainWindow", "Debug On Errors", nullptr));
#if QT_CONFIG(tooltip)
        actionDebugOnErrors->setToolTip(QCoreApplication::translate("MainWindow", "Break into the debugger upon runtime errors", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClassDescriptors->setText(QCoreApplication::translate("MainWindow", "Class &Descriptors", nullptr));
#if QT_CONFIG(tooltip)
        actionClassDescriptors->setToolTip(QCoreApplication::translate("MainWindow", "Class Descriptors", nullptr));
#endif // QT_CONFIG(tooltip)
        actionResultFilters->setText(QCoreApplication::translate("MainWindow", "Result Fi&lters", nullptr));
#if QT_CONFIG(tooltip)
        actionResultFilters->setToolTip(QCoreApplication::translate("MainWindow", "Result Filters", nullptr));
#endif // QT_CONFIG(tooltip)
        actionResultRecorders->setText(QCoreApplication::translate("MainWindow", "Result &Recorders", nullptr));
#if QT_CONFIG(tooltip)
        actionResultRecorders->setToolTip(QCoreApplication::translate("MainWindow", "Result Recorders", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMessagePrinters->setText(QCoreApplication::translate("MainWindow", "Message &Printers", nullptr));
#if QT_CONFIG(tooltip)
        actionMessagePrinters->setToolTip(QCoreApplication::translate("MainWindow", "Message Printers", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDebugNow->setText(QCoreApplication::translate("MainWindow", "Debug Now", nullptr));
#if QT_CONFIG(whatsthis)
        toolBarArea->setWhatsThis(QCoreApplication::translate("MainWindow", "The mainToolBar will be moved into this widget at runtime, along with a layout containing the animation speed slider and the event labels.", nullptr));
#endif // QT_CONFIG(whatsthis)
        nextEventLabel->setText(QCoreApplication::translate("MainWindow", "Next: n/a", nullptr));
        nextModuleLabel->setText(QCoreApplication::translate("MainWindow", "In: n/a", nullptr));
        nextTimeLabel->setText(QCoreApplication::translate("MainWindow", "At: n/a", nullptr));
#if QT_CONFIG(tooltip)
        labelConfigName->setToolTip(QCoreApplication::translate("MainWindow", "Current inifile configuration, run number, network name, and potential scheduler information", nullptr));
#endif // QT_CONFIG(tooltip)
        labelConfigName->setText(QCoreApplication::translate("MainWindow", "(No network set up)", nullptr));
#if QT_CONFIG(tooltip)
        labelMessageStats->setToolTip(QCoreApplication::translate("MainWindow", "Number of events (messages) currently scheduled /\n"
"Number of existing message objects, including scheduled ones /\n"
"Total number of messages created since start of the simulation", nullptr));
#endif // QT_CONFIG(tooltip)
        labelMessageStats->setText(QCoreApplication::translate("MainWindow", "Msg stats: 0 scheduled / 0 existing / 0 created", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuSimulate->setTitle(QCoreApplication::translate("MainWindow", "&Simulate", nullptr));
        menuInspect->setTitle(QCoreApplication::translate("MainWindow", "&Inspect", nullptr));
        menuAvailable_Components->setTitle(QCoreApplication::translate("MainWindow", "Available &Components", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Qtenv toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
