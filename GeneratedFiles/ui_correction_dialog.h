/********************************************************************************
** Form generated from reading UI file 'correction_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORRECTION_DIALOG_H
#define UI_CORRECTION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_CorrectionDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *okButton;
    QLabel *correctionLabel;
    QLabel *contrastLabel;
    QLabel *contrastLabelText;
    QSlider *contrast;
    QSlider *correction;
    QLabel *correctionTextLabel;
    QLabel *preview;
    QCheckBox *previewBox;
    QSlider *gamma;
    QLabel *gammaTextLabel;
    QLabel *gammaLabel;

    void setupUi(QDialog *CorrectionDialog)
    {
        if (CorrectionDialog->objectName().isEmpty())
            CorrectionDialog->setObjectName(QStringLiteral("CorrectionDialog"));
        CorrectionDialog->resize(478, 341);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/lightbulb.png"), QSize(), QIcon::Normal, QIcon::Off);
        CorrectionDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(CorrectionDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        okButton = new QPushButton(CorrectionDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 5, 3, 1, 1);

        correctionLabel = new QLabel(CorrectionDialog);
        correctionLabel->setObjectName(QStringLiteral("correctionLabel"));

        gridLayout->addWidget(correctionLabel, 0, 3, 1, 1);

        contrastLabel = new QLabel(CorrectionDialog);
        contrastLabel->setObjectName(QStringLiteral("contrastLabel"));

        gridLayout->addWidget(contrastLabel, 1, 3, 1, 1);

        contrastLabelText = new QLabel(CorrectionDialog);
        contrastLabelText->setObjectName(QStringLiteral("contrastLabelText"));
        contrastLabelText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(contrastLabelText, 1, 1, 1, 1);

        contrast = new QSlider(CorrectionDialog);
        contrast->setObjectName(QStringLiteral("contrast"));
        contrast->setMaximum(1000);
        contrast->setSingleStep(10);
        contrast->setValue(500);
        contrast->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(contrast, 1, 2, 1, 1);

        correction = new QSlider(CorrectionDialog);
        correction->setObjectName(QStringLiteral("correction"));
        correction->setMaximum(510);
        correction->setValue(255);
        correction->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(correction, 0, 2, 1, 1);

        correctionTextLabel = new QLabel(CorrectionDialog);
        correctionTextLabel->setObjectName(QStringLiteral("correctionTextLabel"));
        correctionTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(correctionTextLabel, 0, 1, 1, 1);

        preview = new QLabel(CorrectionDialog);
        preview->setObjectName(QStringLiteral("preview"));

        gridLayout->addWidget(preview, 3, 2, 1, 1);

        previewBox = new QCheckBox(CorrectionDialog);
        previewBox->setObjectName(QStringLiteral("previewBox"));
        previewBox->setChecked(true);

        gridLayout->addWidget(previewBox, 5, 1, 1, 1);

        gamma = new QSlider(CorrectionDialog);
        gamma->setObjectName(QStringLiteral("gamma"));
        gamma->setMaximum(1000);
        gamma->setSingleStep(10);
        gamma->setValue(500);
        gamma->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(gamma, 2, 2, 1, 1);

        gammaTextLabel = new QLabel(CorrectionDialog);
        gammaTextLabel->setObjectName(QStringLiteral("gammaTextLabel"));
        gammaTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(gammaTextLabel, 2, 1, 1, 1);

        gammaLabel = new QLabel(CorrectionDialog);
        gammaLabel->setObjectName(QStringLiteral("gammaLabel"));

        gridLayout->addWidget(gammaLabel, 2, 3, 1, 1);


        retranslateUi(CorrectionDialog);

        QMetaObject::connectSlotsByName(CorrectionDialog);
    } // setupUi

    void retranslateUi(QDialog *CorrectionDialog)
    {
        CorrectionDialog->setWindowTitle(QApplication::translate("CorrectionDialog", "Correction", 0));
        okButton->setText(QApplication::translate("CorrectionDialog", "OK", 0));
        correctionLabel->setText(QApplication::translate("CorrectionDialog", "TextLabel", 0));
        contrastLabel->setText(QApplication::translate("CorrectionDialog", "TextLabel", 0));
        contrastLabelText->setText(QApplication::translate("CorrectionDialog", "Contrast", 0));
        correctionTextLabel->setText(QApplication::translate("CorrectionDialog", "Brightness", 0));
        preview->setText(QApplication::translate("CorrectionDialog", "PREVIEW", 0));
        previewBox->setText(QApplication::translate("CorrectionDialog", "Preview", 0));
        gammaTextLabel->setText(QApplication::translate("CorrectionDialog", "Gamma", 0));
        gammaLabel->setText(QApplication::translate("CorrectionDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class CorrectionDialog: public Ui_CorrectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORRECTION_DIALOG_H
