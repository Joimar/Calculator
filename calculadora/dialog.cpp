/*
 * Preciso conferir se o conteúdo inteiro do textedit tá indo para a string no botão de =. Após isso, tenho de eliminar os caractéres indesejáveis dessa string
        https://stackoverflow.com/questions/20326356/how-to-remove-all-the-occurrences-of-a-char-in-c-string
 * fazer as operações baseadas no último resultado quando não usar o recurso "limpar"
 * Fazer as operações ignorarem as linhas anteriores

        o conteúdo tá indo certinho


*/

#include "dialog.h"
#include "ui_dialog.h"



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
     QTextCursor cursor(ui->textEdit->textCursor());
     ui->textEdit->setReadOnly(true);
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

    ui->textEdit->insertPlainText(" + ");



}

// subtração
void Dialog::on_pushButton_14_clicked()
{
    somaFlag = false;
    subFlag = true;
    multiFlag = false;
    divisaoFlag = false;

    ui->textEdit->insertPlainText(" - ");

}

// multiplicação
void Dialog::on_pushButton_15_clicked()
{
    somaFlag = false;
    subFlag = false;
    multiFlag = true;
    divisaoFlag = false;

    ui->textEdit->insertPlainText(" * ");
}

// divisão
void Dialog::on_pushButton_16_clicked()
{
    somaFlag = false;
    subFlag = false;
    multiFlag = false;
    divisaoFlag = true;

     ui->textEdit->insertPlainText(" / ");
}


// =
void Dialog::on_pushButton_17_clicked()
{
    double a;
    double b; //= ui->textEdit->toPlainText().toDouble();

    stringDeleter.parse(ui->textEdit->toPlainText().toStdString(), a, b);



    if(somaFlag==true)
    {
        b = calculo.soma(a, b);

//        std::cout << "Soma: " << b<< std::endl;
        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(QString::number(b));

    }

    if(subFlag==true)
    {
        b = calculo.sub(a, b);


        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(QString::number(b));

    }

    if(divisaoFlag==true)
    {
        b = calculo.divisao(a, b);


        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(QString::number(b));

    }

    if(multiFlag==true)
    {
        b = calculo.multi(a, b);

        std::cout << "Multiplicaçao: "<< b << std::endl;
        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(QString::number(b));

    }

    somaFlag = false;
    subFlag = false;
    divisaoFlag = false;
    multiFlag = false;

    erase = true;

   // f = ui->textEdit->toPlainText().toStdString();

}

//Limpar
void Dialog::on_pushButton_12_clicked()
{
    ui->textEdit->clear();
}

void Dialog::on_pushButton_11_clicked()
{
    // testando a retirada de caracteres de string
//    std::string teste = "Testando essa bagaça + / * - \nquebra de linha";

//    teste.erase(std::remove(teste.begin(), teste.end(), '+'), teste.end());
//    teste.erase(std::remove(teste.begin(), teste.end(), ' '), teste.end());
//    stringDeleter.eraseSubStr(teste, "bagaça");
//    std::cout << teste << std::endl;


     ui->textEdit->insertPlainText(".");

}
