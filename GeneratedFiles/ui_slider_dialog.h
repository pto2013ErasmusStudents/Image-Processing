/********************************************************************************
** Form generated from reading UI file 'slider_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDER_DIALOG_H
#define UI_SLIDER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_SliderDialog
{
public:
    QDialogButtonBox *buttonBox;
    QSlider *slider;
    QLabel *sliderLabel;
    QLabel *previewLabel;
    QCheckBox *previevBox;

    void setupUi(QDialog *SliderDialog)
    {
        if (SliderDialog->objectName().isEmpty())
            SliderDialog->setObjectName(QStringLiteral("SliderDialog"));
        SliderDialog->resize(470, 355);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/witch.png"), QSize(), QIcon::Normal, QIcon::Off);
        SliderDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(SliderDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(380, 10, 81, 331));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        slider = new QSlider(SliderDialog);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setGeometry(QRect(40, 10, 321, 20));
        slider->setMinimum(1);
        slider->setMaximum(1000);
        slider->setOrientation(Qt::Horizontal);
        sliderLabel = new QLabel(SliderDialog);
        sliderLabel->setObjectName(QStringLiteral("sliderLabel"));
        sliderLabel->setGeometry(QRect(20, 10, 20, 20));
        previewLabel = new QLabel(SliderDialog);
        previewLabel->setObjectName(QStringLiteral("previewLabel"));
        previewLabel->setGeometry(QRect(20, 60, 351, 281));
        previewLabel->setFrameShape(QFrame::Box);
        previewLabel->setLineWidth(0);
        previevBox = new QCheckBox(SliderDialog);
        previevBox->setObjectName(QStringLiteral("previevBox"));
        previevBox->setGeometry(QRect(20, 40, 70, 17));
        previevBox->setChecked(true);

        retranslateUi(SliderDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SliderDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SliderDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SliderDialog);
    } // setupUi

    void retranslateUi(QDialog *SliderDialog)
    {
        SliderDialog->setWindowTitle(QApplication::translate("SliderDialog", "Dialog", 0));
        sliderLabel->setText(QApplication::translate("SliderDialog", "0", 0));
        previewLabel->setText(QApplication::translate("SliderDialog", "Image", 0));
        previevBox->setText(QApplication::translate("SliderDialog", "Preview", 0));
    } // retranslateUi

};

namespace Ui {
    class SliderDialog: public Ui_SliderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDER_DIALOG_H
