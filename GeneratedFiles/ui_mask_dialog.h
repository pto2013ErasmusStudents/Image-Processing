/********************************************************************************
** Form generated from reading UI file 'mask_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASK_DIALOG_H
#define UI_MASK_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MaskDialog
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *okButton;

    void setupUi(QDialog *MaskDialog)
    {
        if (MaskDialog->objectName().isEmpty())
            MaskDialog->setObjectName(QStringLiteral("MaskDialog"));
        MaskDialog->setEnabled(true);
        MaskDialog->resize(227, 89);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/personal_finance.png"), QSize(), QIcon::Normal, QIcon::Off);
        MaskDialog->setWindowIcon(icon);
        comboBox = new QComboBox(MaskDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(60, 10, 71, 22));
        label = new QLabel(MaskDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 46, 13));
        okButton = new QPushButton(MaskDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(140, 60, 75, 23));
        okButton->setFlat(false);

        retranslateUi(MaskDialog);
        QObject::connect(okButton, SIGNAL(clicked()), MaskDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(MaskDialog);
    } // setupUi

    void retranslateUi(QDialog *MaskDialog)
    {
        MaskDialog->setWindowTitle(QApplication::translate("MaskDialog", "Parameters", 0));
        label->setText(QApplication::translate("MaskDialog", "Mask size", 0));
        okButton->setText(QApplication::translate("MaskDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class MaskDialog: public Ui_MaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASK_DIALOG_H
