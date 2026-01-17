/********************************************************************************
** Form generated from reading UI file 'findobjectsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDOBJECTSDIALOG_H
#define UI_FINDOBJECTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindObjectsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *searchLabel;
    QLineEdit *searchEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *comboLabel;
    QLabel *fullPathLabel;
    QLineEdit *fullPathEdit;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QCheckBox *modulesCheckBox;
    QCheckBox *messagesCheckBox;
    QCheckBox *queuesCheckBox;
    QCheckBox *paramsCheckBox;
    QCheckBox *statisticsCheckBox;
    QCheckBox *gatesCheckBox;
    QCheckBox *watchesCheckBox;
    QCheckBox *otherCheckBox;
    QCheckBox *figuresCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *refresh;
    QWidget *listViewArea;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FindObjectsDialog)
    {
        if (FindObjectsDialog->objectName().isEmpty())
            FindObjectsDialog->setObjectName(QString::fromUtf8("FindObjectsDialog"));
        FindObjectsDialog->resize(757, 497);
        verticalLayout_2 = new QVBoxLayout(FindObjectsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchLabel = new QLabel(FindObjectsDialog);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));

        horizontalLayout->addWidget(searchLabel);

        searchEdit = new QLineEdit(FindObjectsDialog);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));

        horizontalLayout->addWidget(searchEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox = new QGroupBox(FindObjectsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboLabel = new QLabel(groupBox);
        comboLabel->setObjectName(QString::fromUtf8("comboLabel"));

        gridLayout->addWidget(comboLabel, 0, 0, 1, 1);

        fullPathLabel = new QLabel(groupBox);
        fullPathLabel->setObjectName(QString::fromUtf8("fullPathLabel"));

        gridLayout->addWidget(fullPathLabel, 0, 1, 1, 1);

        fullPathEdit = new QLineEdit(groupBox);
        fullPathEdit->setObjectName(QString::fromUtf8("fullPathEdit"));

        gridLayout->addWidget(fullPathEdit, 1, 1, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(true);

        gridLayout->addWidget(comboBox, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(FindObjectsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        modulesCheckBox = new QCheckBox(groupBox_2);
        modulesCheckBox->setObjectName(QString::fromUtf8("modulesCheckBox"));

        gridLayout_3->addWidget(modulesCheckBox, 0, 0, 1, 1);

        messagesCheckBox = new QCheckBox(groupBox_2);
        messagesCheckBox->setObjectName(QString::fromUtf8("messagesCheckBox"));

        gridLayout_3->addWidget(messagesCheckBox, 1, 0, 1, 1);

        queuesCheckBox = new QCheckBox(groupBox_2);
        queuesCheckBox->setObjectName(QString::fromUtf8("queuesCheckBox"));

        gridLayout_3->addWidget(queuesCheckBox, 0, 2, 1, 1);

        paramsCheckBox = new QCheckBox(groupBox_2);
        paramsCheckBox->setObjectName(QString::fromUtf8("paramsCheckBox"));

        gridLayout_3->addWidget(paramsCheckBox, 0, 1, 1, 1);

        statisticsCheckBox = new QCheckBox(groupBox_2);
        statisticsCheckBox->setObjectName(QString::fromUtf8("statisticsCheckBox"));

        gridLayout_3->addWidget(statisticsCheckBox, 0, 3, 1, 1);

        gatesCheckBox = new QCheckBox(groupBox_2);
        gatesCheckBox->setObjectName(QString::fromUtf8("gatesCheckBox"));

        gridLayout_3->addWidget(gatesCheckBox, 1, 1, 1, 1);

        watchesCheckBox = new QCheckBox(groupBox_2);
        watchesCheckBox->setObjectName(QString::fromUtf8("watchesCheckBox"));

        gridLayout_3->addWidget(watchesCheckBox, 1, 2, 1, 1);

        otherCheckBox = new QCheckBox(groupBox_2);
        otherCheckBox->setObjectName(QString::fromUtf8("otherCheckBox"));

        gridLayout_3->addWidget(otherCheckBox, 0, 4, 1, 1);

        figuresCheckBox = new QCheckBox(groupBox_2);
        figuresCheckBox->setObjectName(QString::fromUtf8("figuresCheckBox"));

        gridLayout_3->addWidget(figuresCheckBox, 1, 3, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(FindObjectsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        refresh = new QPushButton(FindObjectsDialog);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setEnabled(true);
        refresh->setAutoDefault(true);

        horizontalLayout_2->addWidget(refresh);


        verticalLayout_2->addLayout(horizontalLayout_2);

        listViewArea = new QWidget(FindObjectsDialog);
        listViewArea->setObjectName(QString::fromUtf8("listViewArea"));

        verticalLayout_2->addWidget(listViewArea);

        buttonBox = new QDialogButtonBox(FindObjectsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setFocusPolicy(Qt::TabFocus);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        comboLabel->setBuddy(comboBox);
        fullPathLabel->setBuddy(fullPathEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(FindObjectsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), FindObjectsDialog, SLOT(accept()));

        refresh->setDefault(true);


        QMetaObject::connectSlotsByName(FindObjectsDialog);
    } // setupUi

    void retranslateUi(QDialog *FindObjectsDialog)
    {
        FindObjectsDialog->setWindowTitle(QCoreApplication::translate("FindObjectsDialog", "Find Objects", nullptr));
        searchLabel->setText(QCoreApplication::translate("FindObjectsDialog", "Search inside:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FindObjectsDialog", "Search by class and object name:", nullptr));
#if QT_CONFIG(tooltip)
        comboLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        comboLabel->setText(QCoreApplication::translate("FindObjectsDialog", "Class filter expression:", nullptr));
        fullPathLabel->setText(QCoreApplication::translate("FindObjectsDialog", "Object filter expression (hover for help):", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FindObjectsDialog", "Object categories:", nullptr));
        modulesCheckBox->setText(QCoreApplication::translate("FindObjectsDialog", "Modules", nullptr));
        messagesCheckBox->setText(QCoreApplication::translate("FindObjectsDialog", "Messages", nullptr));
        queuesCheckBox->setText(QCoreApplication::translate("FindObjectsDialog", "Queues", nullptr));
        paramsCheckBox->setText(QCoreApplication::translate("FindObjectsDialog", "Parameters", nullptr));
        statisticsCheckBox->setText(QCoreApplication::translate("FindObjectsDialog", "Statistics", nullptr));
        gatesCheckBox->setText(QCoreApplication::translate("FindObjectsDialog", "Gates, channels", nullptr));
        watchesCheckBox->setText(QCoreApplication::translate("FindObjectsDialog", "Watches, FSMs", nullptr));
        otherCheckBox->setText(QCoreApplication::translate("FindObjectsDialog", "Other", nullptr));
        figuresCheckBox->setText(QCoreApplication::translate("FindObjectsDialog", "Canvases, figures", nullptr));
        label->setText(QCoreApplication::translate("FindObjectsDialog", "Press Refresh to execute search", nullptr));
        refresh->setText(QCoreApplication::translate("FindObjectsDialog", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindObjectsDialog: public Ui_FindObjectsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDOBJECTSDIALOG_H
