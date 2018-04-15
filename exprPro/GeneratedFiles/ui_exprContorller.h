/********************************************************************************
** Form generated from reading UI file 'exprContorller.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPRCONTORLLER_H
#define UI_EXPRCONTORLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_exprContorllerClass
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_display;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_div;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_mul;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_sum;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *button_point;
    QPushButton *button_0;
    QPushButton *button_getSum;
    QPushButton *button_sub;

    void setupUi(QDialog *exprContorllerClass)
    {
        if (exprContorllerClass->objectName().isEmpty())
            exprContorllerClass->setObjectName(QStringLiteral("exprContorllerClass"));
        exprContorllerClass->resize(449, 729);
        verticalLayout_3 = new QVBoxLayout(exprContorllerClass);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_display = new QLabel(exprContorllerClass);
        label_display->setObjectName(QStringLiteral("label_display"));
        QFont font;
        font.setPointSize(80);
        label_display->setFont(font);
        label_display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_display);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_7 = new QPushButton(exprContorllerClass);
        button_7->setObjectName(QStringLiteral("button_7"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        button_7->setFont(font1);

        horizontalLayout->addWidget(button_7);

        button_8 = new QPushButton(exprContorllerClass);
        button_8->setObjectName(QStringLiteral("button_8"));
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setFont(font1);

        horizontalLayout->addWidget(button_8);

        button_9 = new QPushButton(exprContorllerClass);
        button_9->setObjectName(QStringLiteral("button_9"));
        sizePolicy.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy);
        button_9->setFont(font1);

        horizontalLayout->addWidget(button_9);

        button_div = new QPushButton(exprContorllerClass);
        button_div->setObjectName(QStringLiteral("button_div"));
        sizePolicy.setHeightForWidth(button_div->sizePolicy().hasHeightForWidth());
        button_div->setSizePolicy(sizePolicy);
        button_div->setFont(font1);

        horizontalLayout->addWidget(button_div);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        button_4 = new QPushButton(exprContorllerClass);
        button_4->setObjectName(QStringLiteral("button_4"));
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);
        button_4->setFont(font1);

        horizontalLayout_2->addWidget(button_4);

        button_5 = new QPushButton(exprContorllerClass);
        button_5->setObjectName(QStringLiteral("button_5"));
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);
        button_5->setFont(font1);

        horizontalLayout_2->addWidget(button_5);

        button_6 = new QPushButton(exprContorllerClass);
        button_6->setObjectName(QStringLiteral("button_6"));
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setFont(font1);

        horizontalLayout_2->addWidget(button_6);

        button_mul = new QPushButton(exprContorllerClass);
        button_mul->setObjectName(QStringLiteral("button_mul"));
        sizePolicy.setHeightForWidth(button_mul->sizePolicy().hasHeightForWidth());
        button_mul->setSizePolicy(sizePolicy);
        button_mul->setFont(font1);

        horizontalLayout_2->addWidget(button_mul);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        button_1 = new QPushButton(exprContorllerClass);
        button_1->setObjectName(QStringLiteral("button_1"));
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);
        button_1->setFont(font1);

        horizontalLayout_3->addWidget(button_1);

        button_2 = new QPushButton(exprContorllerClass);
        button_2->setObjectName(QStringLiteral("button_2"));
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setFont(font1);

        horizontalLayout_3->addWidget(button_2);

        button_3 = new QPushButton(exprContorllerClass);
        button_3->setObjectName(QStringLiteral("button_3"));
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);
        button_3->setFont(font1);

        horizontalLayout_3->addWidget(button_3);

        button_sum = new QPushButton(exprContorllerClass);
        button_sum->setObjectName(QStringLiteral("button_sum"));
        sizePolicy.setHeightForWidth(button_sum->sizePolicy().hasHeightForWidth());
        button_sum->setSizePolicy(sizePolicy);
        button_sum->setFont(font1);

        horizontalLayout_3->addWidget(button_sum);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        button_point = new QPushButton(exprContorllerClass);
        button_point->setObjectName(QStringLiteral("button_point"));
        sizePolicy.setHeightForWidth(button_point->sizePolicy().hasHeightForWidth());
        button_point->setSizePolicy(sizePolicy);
        button_point->setFont(font1);

        horizontalLayout_4->addWidget(button_point);

        button_0 = new QPushButton(exprContorllerClass);
        button_0->setObjectName(QStringLiteral("button_0"));
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);
        button_0->setFont(font1);

        horizontalLayout_4->addWidget(button_0);

        button_getSum = new QPushButton(exprContorllerClass);
        button_getSum->setObjectName(QStringLiteral("button_getSum"));
        sizePolicy.setHeightForWidth(button_getSum->sizePolicy().hasHeightForWidth());
        button_getSum->setSizePolicy(sizePolicy);
        button_getSum->setFont(font1);

        horizontalLayout_4->addWidget(button_getSum);

        button_sub = new QPushButton(exprContorllerClass);
        button_sub->setObjectName(QStringLiteral("button_sub"));
        sizePolicy.setHeightForWidth(button_sub->sizePolicy().hasHeightForWidth());
        button_sub->setSizePolicy(sizePolicy);
        button_sub->setFont(font1);

        horizontalLayout_4->addWidget(button_sub);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 7);

        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3->setStretch(0, 3);

        retranslateUi(exprContorllerClass);

        QMetaObject::connectSlotsByName(exprContorllerClass);
    } // setupUi

    void retranslateUi(QDialog *exprContorllerClass)
    {
        exprContorllerClass->setWindowTitle(QApplication::translate("exprContorllerClass", "\350\256\241\347\256\227\345\231\250", nullptr));
        label_display->setText(QApplication::translate("exprContorllerClass", "0", nullptr));
        button_7->setText(QApplication::translate("exprContorllerClass", "7", nullptr));
        button_8->setText(QApplication::translate("exprContorllerClass", "8", nullptr));
        button_9->setText(QApplication::translate("exprContorllerClass", "9", nullptr));
        button_div->setText(QApplication::translate("exprContorllerClass", "/", nullptr));
        button_4->setText(QApplication::translate("exprContorllerClass", "4", nullptr));
        button_5->setText(QApplication::translate("exprContorllerClass", "5", nullptr));
        button_6->setText(QApplication::translate("exprContorllerClass", "6", nullptr));
        button_mul->setText(QApplication::translate("exprContorllerClass", "*", nullptr));
        button_1->setText(QApplication::translate("exprContorllerClass", "1", nullptr));
        button_2->setText(QApplication::translate("exprContorllerClass", "2", nullptr));
        button_3->setText(QApplication::translate("exprContorllerClass", "3", nullptr));
        button_sum->setText(QApplication::translate("exprContorllerClass", "+", nullptr));
        button_point->setText(QApplication::translate("exprContorllerClass", ".", nullptr));
        button_0->setText(QApplication::translate("exprContorllerClass", "0", nullptr));
        button_getSum->setText(QApplication::translate("exprContorllerClass", "=", nullptr));
        button_sub->setText(QApplication::translate("exprContorllerClass", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exprContorllerClass: public Ui_exprContorllerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPRCONTORLLER_H
