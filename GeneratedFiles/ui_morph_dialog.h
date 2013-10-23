/********************************************************************************
** Form generated from reading UI file 'morph_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORPH_DIALOG_H
#define UI_MORPH_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MorphDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *seSize;
    QLabel *label_2;
    QComboBox *seShape;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *MorphDialog)
    {
        if (MorphDialog->objectName().isEmpty())
            MorphDialog->setObjectName(QStringLiteral("MorphDialog"));
        MorphDialog->resize(328, 93);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MorphDialog->sizePolicy().hasHeightForWidth());
        MorphDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/personal_finance.png"), QSize(), QIcon::Normal, QIcon::Off);
        MorphDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(MorphDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(MorphDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        seSize = new QComboBox(MorphDialog);
        seSize->setObjectName(QStringLiteral("seSize"));

        gridLayout->addWidget(seSize, 0, 1, 1, 1);

        label_2 = new QLabel(MorphDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        seShape = new QComboBox(MorphDialog);
        seShape->setObjectName(QStringLiteral("seShape"));

        gridLayout->addWidget(seShape, 1, 1, 1, 1);

        okButton = new QPushButton(MorphDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 2, 1, 1, 1);

        cancelButton = new QPushButton(MorphDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout->addWidget(cancelButton, 2, 2, 1, 1);


        retranslateUi(MorphDialog);

        QMetaObject::connectSlotsByName(MorphDialog);
    } // setupUi

    void retranslateUi(QDialog *MorphDialog)
    {
        MorphDialog->setWindowTitle(QApplication::translate("MorphDialog", "Dialog", 0));
        label->setText(QApplication::translate("MorphDialog", "SE size:", 0));
        label_2->setText(QApplication::translate("MorphDialog", "SE Shape:", 0));
        okButton->setText(QApplication::translate("MorphDialog", "OK", 0));
        cancelButton->setText(QApplication::translate("MorphDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class MorphDialog: public Ui_MorphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORPH_DIALOG_H
