/********************************************************************************
** Form generated from reading UI file 'noise_bilateral_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOISE_BILATERAL_DIALOG_H
#define UI_NOISE_BILATERAL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NoiseBilateralDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSpinBox *sB_sigma_d;
    QLabel *label_2;
    QSpinBox *sB_sigma_r;

    void setupUi(QDialog *NoiseBilateralDialog)
    {
        if (NoiseBilateralDialog->objectName().isEmpty())
            NoiseBilateralDialog->setObjectName(QStringLiteral("NoiseBilateralDialog"));
        NoiseBilateralDialog->resize(235, 75);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/checkerboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        NoiseBilateralDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(NoiseBilateralDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(140, 10, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(NoiseBilateralDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 41, 21));
        sB_sigma_d = new QSpinBox(NoiseBilateralDialog);
        sB_sigma_d->setObjectName(QStringLiteral("sB_sigma_d"));
        sB_sigma_d->setGeometry(QRect(60, 10, 61, 22));
        sB_sigma_d->setMinimum(1);
        sB_sigma_d->setMaximum(10);
        sB_sigma_d->setValue(3);
        label_2 = new QLabel(NoiseBilateralDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 41, 21));
        sB_sigma_r = new QSpinBox(NoiseBilateralDialog);
        sB_sigma_r->setObjectName(QStringLiteral("sB_sigma_r"));
        sB_sigma_r->setGeometry(QRect(60, 40, 61, 22));
        sB_sigma_r->setMinimum(10);
        sB_sigma_r->setMaximum(300);
        sB_sigma_r->setValue(150);

        retranslateUi(NoiseBilateralDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NoiseBilateralDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NoiseBilateralDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NoiseBilateralDialog);
    } // setupUi

    void retranslateUi(QDialog *NoiseBilateralDialog)
    {
        NoiseBilateralDialog->setWindowTitle(QApplication::translate("NoiseBilateralDialog", "Noise Bilateral", 0));
        label->setText(QApplication::translate("NoiseBilateralDialog", "sigma d", 0));
        label_2->setText(QApplication::translate("NoiseBilateralDialog", "sigma r", 0));
    } // retranslateUi

};

namespace Ui {
    class NoiseBilateralDialog: public Ui_NoiseBilateralDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOISE_BILATERAL_DIALOG_H
