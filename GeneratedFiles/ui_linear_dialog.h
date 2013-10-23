/********************************************************************************
** Form generated from reading UI file 'linear_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEAR_DIALOG_H
#define UI_LINEAR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_LinearDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboMask;
    QTableWidget *tableMask;
    QLabel *label_2;
    QSpinBox *spinShift;
    QLabel *label_3;
    QCheckBox *checkNormalize;
    QPushButton *okButton;

    void setupUi(QDialog *LinearDialog)
    {
        if (LinearDialog->objectName().isEmpty())
            LinearDialog->setObjectName(QStringLiteral("LinearDialog"));
        LinearDialog->resize(400, 309);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/draw_convolve.png"), QSize(), QIcon::Normal, QIcon::Off);
        LinearDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(LinearDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(LinearDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboMask = new QComboBox(LinearDialog);
        comboMask->setObjectName(QStringLiteral("comboMask"));

        gridLayout->addWidget(comboMask, 0, 2, 1, 1);

        tableMask = new QTableWidget(LinearDialog);
        if (tableMask->columnCount() < 3)
            tableMask->setColumnCount(3);
        if (tableMask->rowCount() < 3)
            tableMask->setRowCount(3);
        tableMask->setObjectName(QStringLiteral("tableMask"));
        tableMask->setFrameShape(QFrame::Box);
        tableMask->setFrameShadow(QFrame::Plain);
        tableMask->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableMask->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableMask->setShowGrid(true);
        tableMask->setGridStyle(Qt::DashLine);
        tableMask->setCornerButtonEnabled(false);
        tableMask->setRowCount(3);
        tableMask->setColumnCount(3);
        tableMask->horizontalHeader()->setVisible(false);
        tableMask->horizontalHeader()->setCascadingSectionResizes(false);
        tableMask->horizontalHeader()->setDefaultSectionSize(30);
        tableMask->verticalHeader()->setVisible(false);
        tableMask->verticalHeader()->setDefaultSectionSize(30);
        tableMask->verticalHeader()->setHighlightSections(true);

        gridLayout->addWidget(tableMask, 1, 2, 1, 1);

        label_2 = new QLabel(LinearDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        spinShift = new QSpinBox(LinearDialog);
        spinShift->setObjectName(QStringLiteral("spinShift"));
        spinShift->setMaximum(255);
        spinShift->setValue(128);

        gridLayout->addWidget(spinShift, 3, 2, 1, 1);

        label_3 = new QLabel(LinearDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        checkNormalize = new QCheckBox(LinearDialog);
        checkNormalize->setObjectName(QStringLiteral("checkNormalize"));

        gridLayout->addWidget(checkNormalize, 4, 2, 1, 1);

        okButton = new QPushButton(LinearDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 4, 3, 1, 1);


        retranslateUi(LinearDialog);
        QObject::connect(okButton, SIGNAL(clicked()), LinearDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(LinearDialog);
    } // setupUi

    void retranslateUi(QDialog *LinearDialog)
    {
        LinearDialog->setWindowTitle(QApplication::translate("LinearDialog", "Custom filter", 0));
        label->setText(QApplication::translate("LinearDialog", "Mask size", 0));
        label_2->setText(QApplication::translate("LinearDialog", "Shift", 0));
        label_3->setText(QApplication::translate("LinearDialog", "Normalize", 0));
        checkNormalize->setText(QString());
        okButton->setText(QApplication::translate("LinearDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class LinearDialog: public Ui_LinearDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEAR_DIALOG_H
