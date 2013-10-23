/********************************************************************************
** Form generated from reading UI file 'edge_canny_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDGE_CANNY_DIALOG_H
#define UI_EDGE_CANNY_DIALOG_H

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

class Ui_EdgeCannyDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *sB_lower;
    QSpinBox *sB_upper;

    void setupUi(QDialog *EdgeCannyDialog)
    {
        if (EdgeCannyDialog->objectName().isEmpty())
            EdgeCannyDialog->setObjectName(QStringLiteral("EdgeCannyDialog"));
        EdgeCannyDialog->resize(261, 79);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/edge_detection.png"), QSize(), QIcon::Normal, QIcon::Off);
        EdgeCannyDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(EdgeCannyDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(170, 10, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(EdgeCannyDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 81, 21));
        label_2 = new QLabel(EdgeCannyDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 81, 21));
        sB_lower = new QSpinBox(EdgeCannyDialog);
        sB_lower->setObjectName(QStringLiteral("sB_lower"));
        sB_lower->setGeometry(QRect(100, 10, 61, 22));
        sB_lower->setMinimum(0);
        sB_lower->setMaximum(255);
        sB_lower->setValue(50);
        sB_upper = new QSpinBox(EdgeCannyDialog);
        sB_upper->setObjectName(QStringLiteral("sB_upper"));
        sB_upper->setGeometry(QRect(100, 40, 61, 22));
        sB_upper->setMinimum(0);
        sB_upper->setMaximum(255);
        sB_upper->setValue(100);

        retranslateUi(EdgeCannyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EdgeCannyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EdgeCannyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EdgeCannyDialog);
    } // setupUi

    void retranslateUi(QDialog *EdgeCannyDialog)
    {
        EdgeCannyDialog->setWindowTitle(QApplication::translate("EdgeCannyDialog", "Edge Canny", 0));
        label->setText(QApplication::translate("EdgeCannyDialog", "lower threshold", 0));
        label_2->setText(QApplication::translate("EdgeCannyDialog", "upper threshold", 0));
    } // retranslateUi

};

namespace Ui {
    class EdgeCannyDialog: public Ui_EdgeCannyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDGE_CANNY_DIALOG_H
