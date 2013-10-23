/********************************************************************************
** Form generated from reading UI file 'hough_lines_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUGH_LINES_DIALOG_H
#define UI_HOUGH_LINES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_HoughLinesDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QSpinBox *sB_theshold;
    QLabel *label;
    QComboBox *cb_draw_whole_lines;

    void setupUi(QDialog *HoughLinesDialog)
    {
        if (HoughLinesDialog->objectName().isEmpty())
            HoughLinesDialog->setObjectName(QStringLiteral("HoughLinesDialog"));
        HoughLinesDialog->resize(272, 76);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/videodisplay.png"), QSize(), QIcon::Normal, QIcon::Off);
        HoughLinesDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(HoughLinesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(180, 10, 81, 51));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label_3 = new QLabel(HoughLinesDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 71, 21));
        sB_theshold = new QSpinBox(HoughLinesDialog);
        sB_theshold->setObjectName(QStringLiteral("sB_theshold"));
        sB_theshold->setGeometry(QRect(100, 10, 71, 22));
        sB_theshold->setMinimum(0);
        sB_theshold->setMaximum(255);
        sB_theshold->setValue(150);
        label = new QLabel(HoughLinesDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 81, 21));
        cb_draw_whole_lines = new QComboBox(HoughLinesDialog);
        cb_draw_whole_lines->setObjectName(QStringLiteral("cb_draw_whole_lines"));
        cb_draw_whole_lines->setGeometry(QRect(100, 40, 69, 22));

        retranslateUi(HoughLinesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HoughLinesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HoughLinesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HoughLinesDialog);
    } // setupUi

    void retranslateUi(QDialog *HoughLinesDialog)
    {
        HoughLinesDialog->setWindowTitle(QApplication::translate("HoughLinesDialog", "Hough Lines Detection", 0));
        label_3->setText(QApplication::translate("HoughLinesDialog", "threshold", 0));
        label->setText(QApplication::translate("HoughLinesDialog", "draw whole lines", 0));
    } // retranslateUi

};

namespace Ui {
    class HoughLinesDialog: public Ui_HoughLinesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUGH_LINES_DIALOG_H
