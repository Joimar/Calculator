/*
  Quando segue com os calculos e nao limpa a tela, ele pega todos os dados do TextEdit. To tentando usar um QTextCursor, mas talvez a solucao seja sofisticar mais o Parse

  Os resultados tao vindo em pontos, preciso transforma-los em virgulas
*/

#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
     //QTextCursor cursor(ui->textEdit->textCursor());
     ui->textEdit->setReadOnly(true);

     cursor = ui->textEdit->textCursor();
}

Dialog::~Dialog()
{
    delete ui;
}

//0
void Dialog::on_pushButton_10_clicked()
{
//    if(erase)
//    {
//        ui->textEdit->clear();
//        erase = false;
//    }
    ui->textEdit->insertPlainText("0");

}

//1
void Dialog::on_pushButton_clicked()
{
//    if(erase)
//    {
//        ui->textEdit->clear();
//        erase = false;
//    }
     ui->textEdit->insertPlainText("1");
}

//2
void Dialog::on_pushButton_2_clicked()
{
//    if(erase)
//    {
//        ui->textEdit->clear();
//        erase = false;
//    }
    ui->textEdit->insertPlainText("2");
}

//3
void Dialog::on_pushButton_3_clicked()
{
//    if(erase)
//    {
//        ui->textEdit->clear();
//        erase = false;
//    }
     ui->textEdit->insertPlainText("3");
}

//4
void Dialog::on_pushButton_4_clicked()
{
//    if(erase)
//    {
//        ui->textEdit->clear();
//        erase = false;
//    }
    ui->textEdit->insertPlainText("4");

}

//5
void Dialog::on_pushButton_5_clicked()
{
//    if(erase)
//    {
//        ui->textEdit->clear();
//        erase = false;
//    }
     ui->textEdit->insertPlainText("5");
}

//6
void Dialog::on_pushButton_6_clicked()
{
//    if(erase)
//    {
//        ui->textEdit->clear();
//        erase = false;
//    }
    ui->textEdit->insertPlainText("6");
}

//7
void Dialog::on_pushButton_7_clicked()
{
//    if(erase)
//    {
//        ui->textEdit->clear();
//        erase = false;
//    }
     ui->textEdit->insertPlainText("7");
}

//8
void Dialog::on_pushButton_8_clicked()
{
//    if(erase)
//    {
//        ui->textEdit->clear();
//        erase = false;
//    }
    ui->textEdit->insertPlainText("8");

}

//9
void Dialog::on_pushButton_9_clicked()
{
//    if(erase)
//    {
//        ui->textEdit->clear();
//        erase = false;
//    }
    ui->textEdit->insertPlainText("9");
}

// adição
void Dialog::on_pushButton_13_clicked()
{
    somaFlag = true;
    subFlag = false;
    multiFlag = false;
    divisaoFlag = false;

   // erase = true;
    ui->textEdit->insertPlainText(" + ");

}

// subtração
void Dialog::on_pushButton_14_clicked()
{
    somaFlag = false;
    subFlag = true;
    multiFlag = false;
    divisaoFlag = false;

   // erase = true;
   ui->textEdit->insertPlainText(" - ");

}

// multiplicação
void Dialog::on_pushButton_15_clicked()
{
    somaFlag = false;
    subFlag = false;
    multiFlag = true;
    divisaoFlag = false;

   //erase = true;
    ui->textEdit->insertPlainText(" * ");

}

// divisão
void Dialog::on_pushButton_16_clicked()
{
    somaFlag = false;
    subFlag = false;
    multiFlag = false;
    divisaoFlag = true;

   // erase = true;
    ui->textEdit->insertPlainText(" / ");

}


// =
void Dialog::on_pushButton_17_clicked()
{
   double a, b;

   cursor.select(QTextCursor::LineUnderCursor);

   Interator.parse(cursor.selectedText().toStdString(), a, b );

    if(somaFlag==true)
    {
        b = calculo.soma(a, b);
        QString str = QString::number(b, 'f', 6);

        str.remove( QRegExp("0+$") ); // Remove any number of trailing 0's
        str.remove( QRegExp("\\.$") ); // If the last character is just a '.' then remove it
        str.replace('.',',');

        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(str);

    }

    if(subFlag==true)
    {
        b = calculo.sub(a, b);
        QString str = QString::number(b, 'f', 6);

        str.remove( QRegExp("0+$") ); // Remove any number of trailing 0's
        str.remove( QRegExp("\\.$") ); // If the last character is just a '.' then remove it
        str.replace('.',',');

        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(str);

    }

    if(divisaoFlag==true)
    {
        b = calculo.divisao(a, b);
        QString str = QString::number(b, 'f', 6);

        str.remove( QRegExp("0+$") ); // Remove any number of trailing 0's
        str.remove( QRegExp("\\.$") ); // If the last character is just a '.' then remove it
        str.replace('.',',');

        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(str);

    }

    if(multiFlag==true)
    {
        b = calculo.multi(a, b);
        QString str = QString::number(b, 'f', 6);

        str.remove( QRegExp("0+$") ); // Remove any number of trailing 0's
        str.remove( QRegExp("\\.$") ); // If the last character is just a '.' then remove it
        str.replace('.',',');

        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(str);

    }

    somaFlag = false;
    subFlag = false;
    divisaoFlag = false;
    multiFlag = false;

    erase = true;

}

//Limpar
void Dialog::on_pushButton_12_clicked()
{
    ui->textEdit->clear();
}

//ponto
void Dialog::on_pushButton_11_clicked()
{
     ui->textEdit->insertPlainText(",");
}
