/********************************************************************************
** Form generated from reading UI file 'map_normal_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_NORMAL_DIALOG_H
#define UI_MAP_NORMAL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MapNormalDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QDoubleSpinBox *dSB_strength;

    void setupUi(QDialog *MapNormalDialog)
    {
        if (MapNormalDialog->objectName().isEmpty())
            MapNormalDialog->setObjectName(QStringLiteral("MapNormalDialog"));
        MapNormalDialog->resize(221, 71);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/flag_airfield_vehicle_safety.png"), QSize(), QIcon::Normal, QIcon::Off);
        MapNormalDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(MapNormalDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(130, 10, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(MapNormalDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 51, 21));
        dSB_strength = new QDoubleSpinBox(MapNormalDialog);
        dSB_strength->setObjectName(QStringLiteral("dSB_strength"));
        dSB_strength->setGeometry(QRect(60, 10, 62, 22));
        dSB_strength->setMinimum(0.25);
        dSB_strength->setMaximum(10);
        dSB_strength->setSingleStep(0.25);
        dSB_strength->setValue(2);

        retranslateUi(MapNormalDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MapNormalDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MapNormalDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MapNormalDialog);
    } // setupUi

    void retranslateUi(QDialog *MapNormalDialog)
    {
        MapNormalDialog->setWindowTitle(QApplication::translate("MapNormalDialog", "Map Normal", 0));
        label_2->setText(QApplication::translate("MapNormalDialog", "strength", 0));
    } // retranslateUi

};

namespace Ui {
    class MapNormalDialog: public Ui_MapNormalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_NORMAL_DIALOG_H
