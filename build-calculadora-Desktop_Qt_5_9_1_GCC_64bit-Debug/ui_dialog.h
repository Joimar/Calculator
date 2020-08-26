/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QTextEdit *textEdit;
    QPushButton *pushButton_17;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(675, 525);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 270, 89, 25));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 270, 89, 25));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 270, 89, 25));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 250, 89, 25));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 250, 89, 25));
        pushButton_6 = new QPushButton(Dialog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(260, 250, 89, 25));
        pushButton_7 = new QPushButton(Dialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(80, 230, 89, 25));
        pushButton_8 = new QPushButton(Dialog);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(170, 230, 89, 25));
        pushButton_9 = new QPushButton(Dialog);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(260, 230, 89, 25));
        pushButton_10 = new QPushButton(Dialog);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(80, 290, 89, 25));
        pushButton_11 = new QPushButton(Dialog);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(170, 290, 89, 25));
        pushButton_12 = new QPushButton(Dialog);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(260, 290, 89, 25));
        pushButton_13 = new QPushButton(Dialog);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(420, 290, 89, 25));
        pushButton_14 = new QPushButton(Dialog);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(420, 270, 89, 25));
        pushButton_15 = new QPushButton(Dialog);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(420, 250, 89, 25));
        pushButton_16 = new QPushButton(Dialog);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(420, 230, 89, 25));
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(120, 70, 191, 111));
        pushButton_17 = new QPushButton(Dialog);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(420, 310, 89, 25));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Calculadora", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "3", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Dialog", "4", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Dialog", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Dialog", "6", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Dialog", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Dialog", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Dialog", "9", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("Dialog", ",", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("Dialog", "limpar", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("Dialog", "+", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("Dialog", "-", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("Dialog", "x", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("Dialog", "/", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("Dialog", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
