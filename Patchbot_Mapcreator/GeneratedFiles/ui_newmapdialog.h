/********************************************************************************
** Form generated from reading UI file 'newmapdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMAPDIALOG_H
#define UI_NEWMAPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NewMapDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *staticName;
    QLineEdit *nameLineEdit;
    QLabel *staticWidth;
    QLineEdit *widthLineEdit;
    QLabel *staticHeight;
    QLineEdit *heightLineEdit;
    QFrame *lineSpacer;
    QLabel *staticDescription;
    QSpacerItem *buttonAlignmentSpacer;
    QPushButton *createButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *NewMapDialog)
    {
        if (NewMapDialog->objectName().isEmpty())
            NewMapDialog->setObjectName(QStringLiteral("NewMapDialog"));
        NewMapDialog->resize(400, 173);
        gridLayout = new QGridLayout(NewMapDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        staticName = new QLabel(NewMapDialog);
        staticName->setObjectName(QStringLiteral("staticName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, staticName);

        nameLineEdit = new QLineEdit(NewMapDialog);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        staticWidth = new QLabel(NewMapDialog);
        staticWidth->setObjectName(QStringLiteral("staticWidth"));

        formLayout->setWidget(1, QFormLayout::LabelRole, staticWidth);

        widthLineEdit = new QLineEdit(NewMapDialog);
        widthLineEdit->setObjectName(QStringLiteral("widthLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, widthLineEdit);

        staticHeight = new QLabel(NewMapDialog);
        staticHeight->setObjectName(QStringLiteral("staticHeight"));

        formLayout->setWidget(2, QFormLayout::LabelRole, staticHeight);

        heightLineEdit = new QLineEdit(NewMapDialog);
        heightLineEdit->setObjectName(QStringLiteral("heightLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, heightLineEdit);


        gridLayout->addLayout(formLayout, 0, 0, 1, 3);

        lineSpacer = new QFrame(NewMapDialog);
        lineSpacer->setObjectName(QStringLiteral("lineSpacer"));
        lineSpacer->setFrameShape(QFrame::HLine);
        lineSpacer->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineSpacer, 1, 0, 1, 3);

        staticDescription = new QLabel(NewMapDialog);
        staticDescription->setObjectName(QStringLiteral("staticDescription"));

        gridLayout->addWidget(staticDescription, 2, 0, 1, 2);

        buttonAlignmentSpacer = new QSpacerItem(217, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(buttonAlignmentSpacer, 3, 0, 1, 1);

        createButton = new QPushButton(NewMapDialog);
        createButton->setObjectName(QStringLiteral("createButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(createButton->sizePolicy().hasHeightForWidth());
        createButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(createButton, 3, 1, 1, 1);

        cancelButton = new QPushButton(NewMapDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cancelButton, 3, 2, 1, 1);


        retranslateUi(NewMapDialog);

        QMetaObject::connectSlotsByName(NewMapDialog);
    } // setupUi

    void retranslateUi(QDialog *NewMapDialog)
    {
        NewMapDialog->setWindowTitle(QApplication::translate("NewMapDialog", "NewMapDialog", Q_NULLPTR));
        staticName->setText(QApplication::translate("NewMapDialog", "Map name:", Q_NULLPTR));
        staticWidth->setText(QApplication::translate("NewMapDialog", "Map width:", Q_NULLPTR));
        staticHeight->setText(QApplication::translate("NewMapDialog", "Map height:", Q_NULLPTR));
        staticDescription->setText(QApplication::translate("NewMapDialog", "Creates an empty map with the given dimensions.", Q_NULLPTR));
        createButton->setText(QApplication::translate("NewMapDialog", "create", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("NewMapDialog", "cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewMapDialog: public Ui_NewMapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMAPDIALOG_H
