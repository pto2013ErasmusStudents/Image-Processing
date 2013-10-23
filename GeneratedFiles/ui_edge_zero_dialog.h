/********************************************************************************
** Form generated from reading UI file 'edge_zero_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDGE_ZERO_DIALOG_H
#define UI_EDGE_ZERO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_EdgeZeroDialog
{
public:
    QComboBox *comboBox;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QSpinBox *spinBox;

    void setupUi(QDialog *EdgeZeroDialog)
    {
        if (EdgeZeroDialog->objectName().isEmpty())
            EdgeZeroDialog->setObjectName(QStringLiteral("EdgeZeroDialog"));
        EdgeZeroDialog->resize(227, 101);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/edge_detection.png"), QSize(), QIcon::Normal, QIcon::Off);
        EdgeZeroDialog->setWindowIcon(icon);
        comboBox = new QComboBox(EdgeZeroDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(70, 10, 61, 22));
        doubleSpinBox = new QDoubleSpinBox(EdgeZeroDialog);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(71, 40, 61, 22));
        doubleSpinBox->setMinimum(0);
        doubleSpinBox->setSingleStep(0.2);
        doubleSpinBox->setValue(1.6);
        label = new QLabel(EdgeZeroDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 46, 16));
        label_2 = new QLabel(EdgeZeroDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 46, 16));
        buttonBox = new QDialogButtonBox(EdgeZeroDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(140, 10, 81, 51));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label_3 = new QLabel(EdgeZeroDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 46, 21));
        spinBox = new QSpinBox(EdgeZeroDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(70, 70, 61, 22));
        spinBox->setMaximum(127);
        spinBox->setValue(5);

        retranslateUi(EdgeZeroDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EdgeZeroDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EdgeZeroDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EdgeZeroDialog);
    } // setupUi

    void retranslateUi(QDialog *EdgeZeroDialog)
    {
        EdgeZeroDialog->setWindowTitle(QApplication::translate("EdgeZeroDialog", "Edge Zero Crossing", 0));
        label->setText(QApplication::translate("EdgeZeroDialog", "Mask size", 0));
        label_2->setText(QApplication::translate("EdgeZeroDialog", "Sigma", 0));
        label_3->setText(QApplication::translate("EdgeZeroDialog", "Threshold", 0));
    } // retranslateUi

};

namespace Ui {
    class EdgeZeroDialog: public Ui_EdgeZeroDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDGE_ZERO_DIALOG_H
