/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *m_centralWidget;
    QGridLayout *m_mainWindowGridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QGroupBox *InputArea4;
    QGridLayout *gridLayout_4;
    QSpinBox *m_numSideXArea4;
    QSpinBox *m_numYArea4;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_19;
    QSpinBox *m_numSideYArea4;
    QLabel *label_16;
    QLabel *label_20;
    QDoubleSpinBox *m_numValueArea4;
    QSpinBox *m_numXArea4;
    QPushButton *m_setAreaFour;
    QGroupBox *InputArea3;
    QGridLayout *gridLayout_3;
    QSpinBox *m_numSideXArea3;
    QSpinBox *m_numYArea3;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_12;
    QLabel *label_13;
    QDoubleSpinBox *m_numValueArea3;
    QSpinBox *m_numSideYArea3;
    QSpinBox *m_numXArea3;
    QPushButton *m_setAreaThree;
    QGroupBox *InputArea2;
    QGridLayout *gridLayout_2;
    QPushButton *m_setAreaTwo;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_8;
    QSpinBox *m_numSideXArea2;
    QSpinBox *m_numXArea2;
    QLabel *label_6;
    QSpinBox *m_numSideYArea2;
    QLabel *label_7;
    QDoubleSpinBox *m_numValueArea2;
    QSpinBox *m_numYArea2;
    QGroupBox *InputArea1;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpinBox *m_numYArea1;
    QSpinBox *m_numSideYArea1;
    QPushButton *m_setAreaOne;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *m_numSideXArea1;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *m_numXArea1;
    QDoubleSpinBox *m_numValueArea1;
    QLabel *label_22;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QPushButton *m_setPalette3;
    QPushButton *m_setPalette1;
    QPushButton *m_setPalette2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_31;
    QGroupBox *IterationInput;
    QGridLayout *gridLayout_7;
    QSlider *m_iterationSlider;
    QLabel *label_29;
    QSpinBox *m_numMaxIterationIn;
    QLabel *label_27;
    QPushButton *m_setMaxIteration;
    QLabel *label_28;
    QLabel *label_30;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *RulesInput;
    QGridLayout *gridLayout_5;
    QLabel *label_24;
    QDoubleSpinBox *m_numberForBottom;
    QLabel *label_25;
    QDoubleSpinBox *m_numberForDelta;
    QLabel *label_left;
    QDoubleSpinBox *m_numberForLeft;
    QDoubleSpinBox *m_numberForRight;
    QLabel *label_26;
    QLabel *label_23;
    QLabel *label_21;
    QDoubleSpinBox *m_numberForCentre;
    QDoubleSpinBox *m_numberForTop;
    QPushButton *m_updateLeft;
    QPushButton *m_updateRight;
    QPushButton *m_updateCentre;
    QPushButton *m_updateBottom;
    QPushButton *m_updateTop;
    QPushButton *m_updateDelta;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 840);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(186, 189, 182, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(233, 235, 231, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 87, 83, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(141, 143, 138, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush6(QColor(211, 215, 207, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(136, 138, 133, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush10(QColor(145, 145, 145, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        MainWindow->setPalette(palette);
        m_centralWidget = new QWidget(MainWindow);
        m_centralWidget->setObjectName(QString::fromUtf8("m_centralWidget"));
        m_mainWindowGridLayout = new QGridLayout(m_centralWidget);
        m_mainWindowGridLayout->setObjectName(QString::fromUtf8("m_mainWindowGridLayout"));
        groupBox = new QGroupBox(m_centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        InputArea4 = new QGroupBox(groupBox);
        InputArea4->setObjectName(QString::fromUtf8("InputArea4"));
        gridLayout_4 = new QGridLayout(InputArea4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        m_numSideXArea4 = new QSpinBox(InputArea4);
        m_numSideXArea4->setObjectName(QString::fromUtf8("m_numSideXArea4"));
        m_numSideXArea4->setMaximum(100);

        gridLayout_4->addWidget(m_numSideXArea4, 4, 1, 1, 1);

        m_numYArea4 = new QSpinBox(InputArea4);
        m_numYArea4->setObjectName(QString::fromUtf8("m_numYArea4"));
        m_numYArea4->setMaximum(100);

        gridLayout_4->addWidget(m_numYArea4, 2, 1, 1, 1);

        label_18 = new QLabel(InputArea4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 6, 0, 2, 1);

        label_17 = new QLabel(InputArea4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 4, 0, 2, 1);

        label_19 = new QLabel(InputArea4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 8, 0, 1, 1);

        m_numSideYArea4 = new QSpinBox(InputArea4);
        m_numSideYArea4->setObjectName(QString::fromUtf8("m_numSideYArea4"));
        m_numSideYArea4->setMaximum(100);

        gridLayout_4->addWidget(m_numSideYArea4, 6, 1, 1, 1);

        label_16 = new QLabel(InputArea4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 0, 0, 1, 1);

        label_20 = new QLabel(InputArea4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_4->addWidget(label_20, 2, 0, 2, 1);

        m_numValueArea4 = new QDoubleSpinBox(InputArea4);
        m_numValueArea4->setObjectName(QString::fromUtf8("m_numValueArea4"));
        m_numValueArea4->setMinimum(-5.000000000000000);
        m_numValueArea4->setMaximum(5.000000000000000);
        m_numValueArea4->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(m_numValueArea4, 8, 1, 1, 1);

        m_numXArea4 = new QSpinBox(InputArea4);
        m_numXArea4->setObjectName(QString::fromUtf8("m_numXArea4"));
        m_numXArea4->setMaximum(100);
        m_numXArea4->setSingleStep(2);

        gridLayout_4->addWidget(m_numXArea4, 0, 1, 1, 1);

        m_setAreaFour = new QPushButton(InputArea4);
        m_setAreaFour->setObjectName(QString::fromUtf8("m_setAreaFour"));

        gridLayout_4->addWidget(m_setAreaFour, 9, 1, 1, 1);


        gridLayout_6->addWidget(InputArea4, 4, 1, 1, 1);

        InputArea3 = new QGroupBox(groupBox);
        InputArea3->setObjectName(QString::fromUtf8("InputArea3"));
        gridLayout_3 = new QGridLayout(InputArea3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_numSideXArea3 = new QSpinBox(InputArea3);
        m_numSideXArea3->setObjectName(QString::fromUtf8("m_numSideXArea3"));
        m_numSideXArea3->setMaximum(100);

        gridLayout_3->addWidget(m_numSideXArea3, 4, 1, 1, 1);

        m_numYArea3 = new QSpinBox(InputArea3);
        m_numYArea3->setObjectName(QString::fromUtf8("m_numYArea3"));
        m_numYArea3->setMaximum(100);
        m_numYArea3->setSingleStep(2);

        gridLayout_3->addWidget(m_numYArea3, 2, 1, 1, 1);

        label_14 = new QLabel(InputArea3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 6, 0, 2, 1);

        label_11 = new QLabel(InputArea3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        label_15 = new QLabel(InputArea3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 8, 0, 1, 1);

        label_12 = new QLabel(InputArea3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 2, 0, 2, 1);

        label_13 = new QLabel(InputArea3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 4, 0, 2, 1);

        m_numValueArea3 = new QDoubleSpinBox(InputArea3);
        m_numValueArea3->setObjectName(QString::fromUtf8("m_numValueArea3"));
        m_numValueArea3->setMinimum(-5.000000000000000);
        m_numValueArea3->setMaximum(5.000000000000000);
        m_numValueArea3->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(m_numValueArea3, 8, 1, 1, 1);

        m_numSideYArea3 = new QSpinBox(InputArea3);
        m_numSideYArea3->setObjectName(QString::fromUtf8("m_numSideYArea3"));
        m_numSideYArea3->setMaximum(100);

        gridLayout_3->addWidget(m_numSideYArea3, 6, 1, 1, 1);

        m_numXArea3 = new QSpinBox(InputArea3);
        m_numXArea3->setObjectName(QString::fromUtf8("m_numXArea3"));
        m_numXArea3->setMaximum(100);
        m_numXArea3->setSingleStep(2);

        gridLayout_3->addWidget(m_numXArea3, 0, 1, 1, 1);

        m_setAreaThree = new QPushButton(InputArea3);
        m_setAreaThree->setObjectName(QString::fromUtf8("m_setAreaThree"));

        gridLayout_3->addWidget(m_setAreaThree, 9, 1, 1, 1);


        gridLayout_6->addWidget(InputArea3, 4, 0, 1, 1);

        InputArea2 = new QGroupBox(groupBox);
        InputArea2->setObjectName(QString::fromUtf8("InputArea2"));
        gridLayout_2 = new QGridLayout(InputArea2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_setAreaTwo = new QPushButton(InputArea2);
        m_setAreaTwo->setObjectName(QString::fromUtf8("m_setAreaTwo"));

        gridLayout_2->addWidget(m_setAreaTwo, 9, 1, 1, 1);

        label_10 = new QLabel(InputArea2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 8, 0, 1, 1);

        label_9 = new QLabel(InputArea2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 6, 0, 1, 1);

        label_8 = new QLabel(InputArea2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        m_numSideXArea2 = new QSpinBox(InputArea2);
        m_numSideXArea2->setObjectName(QString::fromUtf8("m_numSideXArea2"));
        m_numSideXArea2->setMaximum(100);

        gridLayout_2->addWidget(m_numSideXArea2, 4, 1, 1, 1);

        m_numXArea2 = new QSpinBox(InputArea2);
        m_numXArea2->setObjectName(QString::fromUtf8("m_numXArea2"));
        m_numXArea2->setMaximum(100);
        m_numXArea2->setSingleStep(2);

        gridLayout_2->addWidget(m_numXArea2, 0, 1, 1, 1);

        label_6 = new QLabel(InputArea2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        m_numSideYArea2 = new QSpinBox(InputArea2);
        m_numSideYArea2->setObjectName(QString::fromUtf8("m_numSideYArea2"));
        m_numSideYArea2->setMaximum(100);

        gridLayout_2->addWidget(m_numSideYArea2, 6, 1, 1, 1);

        label_7 = new QLabel(InputArea2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        m_numValueArea2 = new QDoubleSpinBox(InputArea2);
        m_numValueArea2->setObjectName(QString::fromUtf8("m_numValueArea2"));
        m_numValueArea2->setMinimum(-5.000000000000000);
        m_numValueArea2->setMaximum(5.000000000000000);
        m_numValueArea2->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(m_numValueArea2, 8, 1, 1, 1);

        m_numYArea2 = new QSpinBox(InputArea2);
        m_numYArea2->setObjectName(QString::fromUtf8("m_numYArea2"));
        m_numYArea2->setMaximum(100);
        m_numYArea2->setSingleStep(2);

        gridLayout_2->addWidget(m_numYArea2, 2, 1, 1, 1);


        gridLayout_6->addWidget(InputArea2, 3, 1, 1, 1);

        InputArea1 = new QGroupBox(groupBox);
        InputArea1->setObjectName(QString::fromUtf8("InputArea1"));
        gridLayout = new QGridLayout(InputArea1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(InputArea1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 2, 1);

        m_numYArea1 = new QSpinBox(InputArea1);
        m_numYArea1->setObjectName(QString::fromUtf8("m_numYArea1"));
        m_numYArea1->setMaximum(100);
        m_numYArea1->setSingleStep(2);

        gridLayout->addWidget(m_numYArea1, 2, 1, 1, 1);

        m_numSideYArea1 = new QSpinBox(InputArea1);
        m_numSideYArea1->setObjectName(QString::fromUtf8("m_numSideYArea1"));
        m_numSideYArea1->setMaximum(100);

        gridLayout->addWidget(m_numSideYArea1, 6, 1, 1, 1);

        m_setAreaOne = new QPushButton(InputArea1);
        m_setAreaOne->setObjectName(QString::fromUtf8("m_setAreaOne"));

        gridLayout->addWidget(m_setAreaOne, 10, 1, 1, 1);

        label_2 = new QLabel(InputArea1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 2, 1);

        label = new QLabel(InputArea1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 2, 1);

        m_numSideXArea1 = new QSpinBox(InputArea1);
        m_numSideXArea1->setObjectName(QString::fromUtf8("m_numSideXArea1"));
        m_numSideXArea1->setMaximum(100);

        gridLayout->addWidget(m_numSideXArea1, 4, 1, 1, 1);

        label_4 = new QLabel(InputArea1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 2, 1);

        label_5 = new QLabel(InputArea1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 2, 1);

        m_numXArea1 = new QSpinBox(InputArea1);
        m_numXArea1->setObjectName(QString::fromUtf8("m_numXArea1"));
        m_numXArea1->setMaximum(100);
        m_numXArea1->setSingleStep(2);

        gridLayout->addWidget(m_numXArea1, 0, 1, 1, 1);

        m_numValueArea1 = new QDoubleSpinBox(InputArea1);
        m_numValueArea1->setObjectName(QString::fromUtf8("m_numValueArea1"));
        m_numValueArea1->setMinimum(-5.000000000000000);
        m_numValueArea1->setMaximum(5.000000000000000);
        m_numValueArea1->setSingleStep(0.100000000000000);

        gridLayout->addWidget(m_numValueArea1, 8, 1, 1, 1);


        gridLayout_6->addWidget(InputArea1, 3, 0, 1, 1);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        QFont font;
        font.setPointSize(10);
        font.setItalic(false);
        label_22->setFont(font);

        gridLayout_6->addWidget(label_22, 2, 0, 1, 2);


        m_mainWindowGridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(m_centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        groupBox_2->setFont(font1);
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        m_setPalette3 = new QPushButton(groupBox_2);
        m_setPalette3->setObjectName(QString::fromUtf8("m_setPalette3"));
        QFont font2;
        font2.setBold(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        m_setPalette3->setFont(font2);

        gridLayout_8->addWidget(m_setPalette3, 2, 1, 1, 1);

        m_setPalette1 = new QPushButton(groupBox_2);
        m_setPalette1->setObjectName(QString::fromUtf8("m_setPalette1"));
        m_setPalette1->setFont(font2);

        gridLayout_8->addWidget(m_setPalette1, 0, 1, 1, 1);

        m_setPalette2 = new QPushButton(groupBox_2);
        m_setPalette2->setObjectName(QString::fromUtf8("m_setPalette2"));
        m_setPalette2->setFont(font2);

        gridLayout_8->addWidget(m_setPalette2, 1, 1, 1, 1);


        m_mainWindowGridLayout->addWidget(groupBox_2, 6, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_mainWindowGridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        label_31 = new QLabel(m_centralWidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setFont(font1);

        m_mainWindowGridLayout->addWidget(label_31, 2, 0, 1, 1);

        IterationInput = new QGroupBox(m_centralWidget);
        IterationInput->setObjectName(QString::fromUtf8("IterationInput"));
        IterationInput->setFont(font1);
        gridLayout_7 = new QGridLayout(IterationInput);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        m_iterationSlider = new QSlider(IterationInput);
        m_iterationSlider->setObjectName(QString::fromUtf8("m_iterationSlider"));
        m_iterationSlider->setMinimum(0);
        m_iterationSlider->setMaximum(100);
        m_iterationSlider->setOrientation(Qt::Horizontal);
        m_iterationSlider->setTickPosition(QSlider::NoTicks);

        gridLayout_7->addWidget(m_iterationSlider, 3, 2, 1, 1);

        label_29 = new QLabel(IterationInput);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        label_29->setFont(font3);

        gridLayout_7->addWidget(label_29, 0, 1, 1, 2);

        m_numMaxIterationIn = new QSpinBox(IterationInput);
        m_numMaxIterationIn->setObjectName(QString::fromUtf8("m_numMaxIterationIn"));
        m_numMaxIterationIn->setFont(font2);
        m_numMaxIterationIn->setMaximum(500);

        gridLayout_7->addWidget(m_numMaxIterationIn, 2, 0, 1, 1);

        label_27 = new QLabel(IterationInput);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setUnderline(false);
        font4.setWeight(50);
        label_27->setFont(font4);

        gridLayout_7->addWidget(label_27, 0, 0, 1, 1);

        m_setMaxIteration = new QPushButton(IterationInput);
        m_setMaxIteration->setObjectName(QString::fromUtf8("m_setMaxIteration"));
        m_setMaxIteration->setFont(font2);

        gridLayout_7->addWidget(m_setMaxIteration, 3, 0, 1, 1);

        label_28 = new QLabel(IterationInput);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_7->addWidget(label_28, 2, 2, 1, 1);


        m_mainWindowGridLayout->addWidget(IterationInput, 6, 2, 1, 2);

        label_30 = new QLabel(m_centralWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font1);

        m_mainWindowGridLayout->addWidget(label_30, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_mainWindowGridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        RulesInput = new QGroupBox(m_centralWidget);
        RulesInput->setObjectName(QString::fromUtf8("RulesInput"));
        QFont font5;
        font5.setBold(false);
        font5.setWeight(50);
        RulesInput->setFont(font5);
        gridLayout_5 = new QGridLayout(RulesInput);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_24 = new QLabel(RulesInput);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_5->addWidget(label_24, 4, 0, 1, 1);

        m_numberForBottom = new QDoubleSpinBox(RulesInput);
        m_numberForBottom->setObjectName(QString::fromUtf8("m_numberForBottom"));
        m_numberForBottom->setMinimum(-5.000000000000000);
        m_numberForBottom->setMaximum(5.000000000000000);
        m_numberForBottom->setSingleStep(0.010000000000000);
        m_numberForBottom->setValue(0.600000000000000);

        gridLayout_5->addWidget(m_numberForBottom, 4, 1, 1, 1);

        label_25 = new QLabel(RulesInput);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_5->addWidget(label_25, 5, 0, 1, 1);

        m_numberForDelta = new QDoubleSpinBox(RulesInput);
        m_numberForDelta->setObjectName(QString::fromUtf8("m_numberForDelta"));
        m_numberForDelta->setMinimum(-5.000000000000000);
        m_numberForDelta->setMaximum(5.000000000000000);
        m_numberForDelta->setSingleStep(0.010000000000000);
        m_numberForDelta->setValue(0.020000000000000);

        gridLayout_5->addWidget(m_numberForDelta, 6, 1, 1, 1);

        label_left = new QLabel(RulesInput);
        label_left->setObjectName(QString::fromUtf8("label_left"));

        gridLayout_5->addWidget(label_left, 0, 0, 1, 1);

        m_numberForLeft = new QDoubleSpinBox(RulesInput);
        m_numberForLeft->setObjectName(QString::fromUtf8("m_numberForLeft"));
        m_numberForLeft->setMinimum(-5.000000000000000);
        m_numberForLeft->setMaximum(5.000000000000000);
        m_numberForLeft->setSingleStep(0.010000000000000);
        m_numberForLeft->setValue(0.020000000000000);

        gridLayout_5->addWidget(m_numberForLeft, 0, 1, 1, 1);

        m_numberForRight = new QDoubleSpinBox(RulesInput);
        m_numberForRight->setObjectName(QString::fromUtf8("m_numberForRight"));
        m_numberForRight->setMinimum(-5.000000000000000);
        m_numberForRight->setMaximum(5.000000000000000);
        m_numberForRight->setSingleStep(0.010000000000000);
        m_numberForRight->setValue(1.000000000000000);

        gridLayout_5->addWidget(m_numberForRight, 2, 1, 1, 1);

        label_26 = new QLabel(RulesInput);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_5->addWidget(label_26, 6, 0, 1, 1);

        label_23 = new QLabel(RulesInput);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_5->addWidget(label_23, 3, 0, 1, 1);

        label_21 = new QLabel(RulesInput);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_5->addWidget(label_21, 2, 0, 1, 1);

        m_numberForCentre = new QDoubleSpinBox(RulesInput);
        m_numberForCentre->setObjectName(QString::fromUtf8("m_numberForCentre"));
        m_numberForCentre->setMinimum(-5.000000000000000);
        m_numberForCentre->setMaximum(5.000000000000000);
        m_numberForCentre->setSingleStep(0.010000000000000);
        m_numberForCentre->setValue(-0.800000000000000);

        gridLayout_5->addWidget(m_numberForCentre, 3, 1, 1, 1);

        m_numberForTop = new QDoubleSpinBox(RulesInput);
        m_numberForTop->setObjectName(QString::fromUtf8("m_numberForTop"));
        m_numberForTop->setMinimum(-5.000000000000000);
        m_numberForTop->setMaximum(5.000000000000000);
        m_numberForTop->setSingleStep(0.010000000000000);
        m_numberForTop->setValue(-1.000000000000000);

        gridLayout_5->addWidget(m_numberForTop, 5, 1, 1, 1);

        m_updateLeft = new QPushButton(RulesInput);
        m_updateLeft->setObjectName(QString::fromUtf8("m_updateLeft"));

        gridLayout_5->addWidget(m_updateLeft, 0, 2, 1, 1);

        m_updateRight = new QPushButton(RulesInput);
        m_updateRight->setObjectName(QString::fromUtf8("m_updateRight"));

        gridLayout_5->addWidget(m_updateRight, 2, 2, 1, 1);

        m_updateCentre = new QPushButton(RulesInput);
        m_updateCentre->setObjectName(QString::fromUtf8("m_updateCentre"));

        gridLayout_5->addWidget(m_updateCentre, 3, 2, 1, 1);

        m_updateBottom = new QPushButton(RulesInput);
        m_updateBottom->setObjectName(QString::fromUtf8("m_updateBottom"));

        gridLayout_5->addWidget(m_updateBottom, 4, 2, 1, 1);

        m_updateTop = new QPushButton(RulesInput);
        m_updateTop->setObjectName(QString::fromUtf8("m_updateTop"));

        gridLayout_5->addWidget(m_updateTop, 5, 2, 1, 1);

        m_updateDelta = new QPushButton(RulesInput);
        m_updateDelta->setObjectName(QString::fromUtf8("m_updateDelta"));

        gridLayout_5->addWidget(m_updateDelta, 6, 2, 1, 1);


        m_mainWindowGridLayout->addWidget(RulesInput, 3, 0, 4, 1);

        MainWindow->setCentralWidget(m_centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1500, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Landscape NGL", nullptr));
        groupBox->setTitle(QString());
        InputArea4->setTitle(QCoreApplication::translate("MainWindow", "Input Area 4", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "side y", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "side x", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "value", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        m_setAreaFour->setText(QCoreApplication::translate("MainWindow", "set", nullptr));
        InputArea3->setTitle(QCoreApplication::translate("MainWindow", "Input Area 3", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "side y", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "value", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "side x", nullptr));
        m_setAreaThree->setText(QCoreApplication::translate("MainWindow", "set", nullptr));
        InputArea2->setTitle(QCoreApplication::translate("MainWindow", "Input Area 2", nullptr));
        m_setAreaTwo->setText(QCoreApplication::translate("MainWindow", "set", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "value", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "side y", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "side x", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "         x", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "         y", nullptr));
        InputArea1->setTitle(QCoreApplication::translate("MainWindow", "Input Area 1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "side x", nullptr));
        m_setAreaOne->setText(QCoreApplication::translate("MainWindow", "set", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "        x", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "        y", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "side y", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "value", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "         The grid is 100x100, please input data accordingly.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Colour Palettes", nullptr));
        m_setPalette3->setText(QCoreApplication::translate("MainWindow", "Palette 3", nullptr));
        m_setPalette1->setText(QCoreApplication::translate("MainWindow", "Palette 1", nullptr));
        m_setPalette2->setText(QCoreApplication::translate("MainWindow", "Palette 2", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", " Rules Input", nullptr));
        IterationInput->setTitle(QCoreApplication::translate("MainWindow", "Landscape Evolution", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "- Please input up to 500", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Iteration n\302\272  ", nullptr));
        m_setMaxIteration->setText(QCoreApplication::translate("MainWindow", "set", nullptr));
        label_28->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", " Initial Landscape Controls", nullptr));
        RulesInput->setTitle(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "Bottom", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Top", nullptr));
        label_left->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Delta", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Centre", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        m_updateLeft->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        m_updateRight->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        m_updateCentre->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        m_updateBottom->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        m_updateTop->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        m_updateDelta->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
