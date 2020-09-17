#ifndef DIALOG_H
#define DIALOG_H
#include <string.h>
#include <iostream>
#include <QDialog>
#include "calculador.h"
#include <algorithm>
#include "interatorinterface.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();



private slots:
    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::Dialog *ui;
    bool somaFlag = false;
    bool subFlag = false;
    bool divisaoFlag = false;
    bool multiFlag = false;
    bool erase = false;
    double aux = 0.0;
    calculador calculo = calculador();
    InteratorInterface stringDeleter = InteratorInterface();
};

#endif // DIALOG_H
