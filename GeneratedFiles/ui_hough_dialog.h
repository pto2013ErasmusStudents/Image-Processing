/********************************************************************************
** Form generated from reading UI file 'hough_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUGH_DIALOG_H
#define UI_HOUGH_DIALOG_H

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

class Ui_HoughDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QSpinBox *sB_theta_density;

    void setupUi(QDialog *HoughDialog)
    {
        if (HoughDialog->objectName().isEmpty())
            HoughDialog->setObjectName(QStringLiteral("HoughDialog"));
        HoughDialog->resize(227, 72);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/videodisplay.png"), QSize(), QIcon::Normal, QIcon::Off);
        HoughDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(HoughDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(140, 10, 81, 51));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label_3 = new QLabel(HoughDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 71, 21));
        sB_theta_density = new QSpinBox(HoughDialog);
        sB_theta_density->setObjectName(QStringLiteral("sB_theta_density"));
        sB_theta_density->setGeometry(QRect(90, 10, 41, 22));
        sB_theta_density->setMinimum(1);
        sB_theta_density->setMaximum(10);
        sB_theta_density->setValue(3);

        retranslateUi(HoughDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HoughDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HoughDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HoughDialog);
    } // setupUi

    void retranslateUi(QDialog *HoughDialog)
    {
        HoughDialog->setWindowTitle(QApplication::translate("HoughDialog", "Hough Transform", 0));
        label_3->setText(QApplication::translate("HoughDialog", "theta density", 0));
    } // retranslateUi

};

namespace Ui {
    class HoughDialog: public Ui_HoughDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUGH_DIALOG_H
