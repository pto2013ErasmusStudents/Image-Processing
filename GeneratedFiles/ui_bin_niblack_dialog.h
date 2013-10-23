/********************************************************************************
** Form generated from reading UI file 'bin_niblack_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIN_NIBLACK_DIALOG_H
#define UI_BIN_NIBLACK_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_BinNiblackDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *sB_r;
    QDoubleSpinBox *dSB_a;

    void setupUi(QDialog *BinNiblackDialog)
    {
        if (BinNiblackDialog->objectName().isEmpty())
            BinNiblackDialog->setObjectName(QStringLiteral("BinNiblackDialog"));
        BinNiblackDialog->resize(205, 72);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/universal_binary.png"), QSize(), QIcon::Normal, QIcon::Off);
        BinNiblackDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(BinNiblackDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 10, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(BinNiblackDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 16, 21));
        label_2 = new QLabel(BinNiblackDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 16, 21));
        sB_r = new QSpinBox(BinNiblackDialog);
        sB_r->setObjectName(QStringLiteral("sB_r"));
        sB_r->setGeometry(QRect(30, 10, 61, 22));
        sB_r->setMinimum(1);
        sB_r->setMaximum(100);
        sB_r->setValue(15);
        dSB_a = new QDoubleSpinBox(BinNiblackDialog);
        dSB_a->setObjectName(QStringLiteral("dSB_a"));
        dSB_a->setGeometry(QRect(30, 40, 62, 22));
        dSB_a->setMinimum(-1);
        dSB_a->setMaximum(1);
        dSB_a->setSingleStep(0.1);
        dSB_a->setValue(-0.2);

        retranslateUi(BinNiblackDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BinNiblackDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BinNiblackDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BinNiblackDialog);
    } // setupUi

    void retranslateUi(QDialog *BinNiblackDialog)
    {
        BinNiblackDialog->setWindowTitle(QApplication::translate("BinNiblackDialog", "Niblack Binarization", 0));
        label->setText(QApplication::translate("BinNiblackDialog", "r", 0));
        label_2->setText(QApplication::translate("BinNiblackDialog", "a", 0));
    } // retranslateUi

};

namespace Ui {
    class BinNiblackDialog: public Ui_BinNiblackDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIN_NIBLACK_DIALOG_H
