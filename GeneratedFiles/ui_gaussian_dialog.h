/********************************************************************************
** Form generated from reading UI file 'gaussian_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAUSSIAN_DIALOG_H
#define UI_GAUSSIAN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GaussianDialog
{
public:
    QComboBox *comboBox;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *okButton;

    void setupUi(QDialog *GaussianDialog)
    {
        if (GaussianDialog->objectName().isEmpty())
            GaussianDialog->setObjectName(QStringLiteral("GaussianDialog"));
        GaussianDialog->resize(227, 89);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/draw_convolve.png"), QSize(), QIcon::Normal, QIcon::Off);
        GaussianDialog->setWindowIcon(icon);
        comboBox = new QComboBox(GaussianDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(60, 10, 71, 22));
        doubleSpinBox = new QDoubleSpinBox(GaussianDialog);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(70, 40, 62, 22));
        doubleSpinBox->setMinimum(0);
        doubleSpinBox->setSingleStep(0.25);
        doubleSpinBox->setValue(1);
        label = new QLabel(GaussianDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 46, 13));
        label_2 = new QLabel(GaussianDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 46, 13));
        okButton = new QPushButton(GaussianDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(140, 60, 75, 23));
        okButton->setFlat(false);

        retranslateUi(GaussianDialog);
        QObject::connect(okButton, SIGNAL(clicked()), GaussianDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(GaussianDialog);
    } // setupUi

    void retranslateUi(QDialog *GaussianDialog)
    {
        GaussianDialog->setWindowTitle(QApplication::translate("GaussianDialog", "Gausian Blur ", 0));
        label->setText(QApplication::translate("GaussianDialog", "Mask size", 0));
        label_2->setText(QApplication::translate("GaussianDialog", "Sigma", 0));
        okButton->setText(QApplication::translate("GaussianDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class GaussianDialog: public Ui_GaussianDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAUSSIAN_DIALOG_H
