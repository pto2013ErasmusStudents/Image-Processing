/********************************************************************************
** Form generated from reading UI file 'histogramviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAMVIEWER_H
#define UI_HISTOGRAMVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistogramViewer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *histogramLabel;
    QGroupBox *channelBox;
    QToolButton *toggleRed;
    QToolButton *toggleGreen;
    QToolButton *toggleBlue;
    QToolButton *toggleGray;

    void setupUi(QWidget *HistogramViewer)
    {
        if (HistogramViewer->objectName().isEmpty())
            HistogramViewer->setObjectName(QStringLiteral("HistogramViewer"));
        HistogramViewer->setWindowModality(Qt::WindowModal);
        HistogramViewer->resize(320, 255);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HistogramViewer->sizePolicy().hasHeightForWidth());
        HistogramViewer->setSizePolicy(sizePolicy);
        HistogramViewer->setMinimumSize(QSize(320, 255));
        HistogramViewer->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(HistogramViewer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        histogramLabel = new QLabel(HistogramViewer);
        histogramLabel->setObjectName(QStringLiteral("histogramLabel"));
        sizePolicy.setHeightForWidth(histogramLabel->sizePolicy().hasHeightForWidth());
        histogramLabel->setSizePolicy(sizePolicy);
        histogramLabel->setMinimumSize(QSize(100, 100));
        histogramLabel->setMaximumSize(QSize(600, 800));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        histogramLabel->setFont(font);
        histogramLabel->setScaledContents(false);
        histogramLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(histogramLabel);

        channelBox = new QGroupBox(HistogramViewer);
        channelBox->setObjectName(QStringLiteral("channelBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(channelBox->sizePolicy().hasHeightForWidth());
        channelBox->setSizePolicy(sizePolicy1);
        channelBox->setMinimumSize(QSize(280, 30));
        channelBox->setMaximumSize(QSize(1500, 30));
        channelBox->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        channelBox->setFlat(true);
        toggleRed = new QToolButton(channelBox);
        toggleRed->setObjectName(QStringLiteral("toggleRed"));
        toggleRed->setGeometry(QRect(0, 10, 25, 19));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/eye_red.png"), QSize(), QIcon::Normal, QIcon::Off);
        toggleRed->setIcon(icon);
        toggleRed->setCheckable(true);
        toggleRed->setChecked(true);
        toggleRed->setAutoRaise(true);
        toggleGreen = new QToolButton(channelBox);
        toggleGreen->setObjectName(QStringLiteral("toggleGreen"));
        toggleGreen->setGeometry(QRect(30, 10, 25, 19));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/eye_green.png"), QSize(), QIcon::Normal, QIcon::Off);
        toggleGreen->setIcon(icon1);
        toggleGreen->setCheckable(true);
        toggleGreen->setChecked(true);
        toggleGreen->setAutoRaise(true);
        toggleBlue = new QToolButton(channelBox);
        toggleBlue->setObjectName(QStringLiteral("toggleBlue"));
        toggleBlue->setGeometry(QRect(60, 10, 25, 19));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/eye_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        toggleBlue->setIcon(icon2);
        toggleBlue->setCheckable(true);
        toggleBlue->setChecked(true);
        toggleBlue->setAutoRaise(true);
        toggleGray = new QToolButton(channelBox);
        toggleGray->setObjectName(QStringLiteral("toggleGray"));
        toggleGray->setGeometry(QRect(90, 10, 25, 19));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/eye_gray.png"), QSize(), QIcon::Normal, QIcon::Off);
        toggleGray->setIcon(icon3);
        toggleGray->setCheckable(true);
        toggleGray->setChecked(true);
        toggleGray->setAutoRaise(true);

        verticalLayout->addWidget(channelBox);


        retranslateUi(HistogramViewer);

        QMetaObject::connectSlotsByName(HistogramViewer);
    } // setupUi

    void retranslateUi(QWidget *HistogramViewer)
    {
        HistogramViewer->setWindowTitle(QApplication::translate("HistogramViewer", "Form", 0));
        histogramLabel->setText(QApplication::translate("HistogramViewer", "Histogram", 0));
        channelBox->setTitle(QApplication::translate("HistogramViewer", "Channels", 0));
        toggleRed->setText(QApplication::translate("HistogramViewer", "...", 0));
        toggleGreen->setText(QApplication::translate("HistogramViewer", "...", 0));
        toggleBlue->setText(QApplication::translate("HistogramViewer", "...", 0));
        toggleGray->setText(QApplication::translate("HistogramViewer", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class HistogramViewer: public Ui_HistogramViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAMVIEWER_H
