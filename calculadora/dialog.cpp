/* Preciso conferir se o conteúdo inteiro do textedit tá indo para a string no botão de =. Após isso, tenho de eliminar os caractéres indesejáveis dessa string
        https://stackoverflow.com/questions/20326356/how-to-remove-all-the-occurrences-of-a-char-in-c-string

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
    if(erase)
    {
        ui->textEdit->clear();
        erase = false;
    }
    ui->textEdit->insertPlainText("0");

}

//1
void Dialog::on_pushButton_clicked()
{
    if(erase)
    {
        ui->textEdit->clear();
        erase = false;
    }
     ui->textEdit->insertPlainText("1");
}

//2
void Dialog::on_pushButton_2_clicked()
{
    if(erase)
    {
        ui->textEdit->clear();
        erase = false;
    }
    ui->textEdit->insertPlainText("2");
}

//3
void Dialog::on_pushButton_3_clicked()
{
    if(erase)
    {
        ui->textEdit->clear();
        erase = false;
    }
     ui->textEdit->insertPlainText("3");
}

//4
void Dialog::on_pushButton_4_clicked()
{
    if(erase)
    {
        ui->textEdit->clear();
        erase = false;
    }
    ui->textEdit->insertPlainText("8");

}

//5
void Dialog::on_pushButton_5_clicked()
{
    if(erase)
    {
        ui->textEdit->clear();
        erase = false;
    }
     ui->textEdit->insertPlainText("5");
}

//6
void Dialog::on_pushButton_6_clicked()
{
    if(erase)
    {
        ui->textEdit->clear();
        erase = false;
    }
    ui->textEdit->insertPlainText("6");
}

//7
void Dialog::on_pushButton_7_clicked()
{
    if(erase)
    {
        ui->textEdit->clear();
        erase = false;
    }
     ui->textEdit->insertPlainText("7");
}

//8
void Dialog::on_pushButton_8_clicked()
{
    if(erase)
    {
        ui->textEdit->clear();
        erase = false;
    }
    ui->textEdit->insertPlainText("8");

}

//9
void Dialog::on_pushButton_9_clicked()
{
    if(erase)
    {
        ui->textEdit->clear();
        erase = false;
    }
    ui->textEdit->insertPlainText("9");
}

// adição
void Dialog::on_pushButton_13_clicked()
{
    somaFlag = true;
    subFlag = false;
    multiFlag = false;
    divisaoFlag = false;

    erase = true;
   // ui->textEdit->insertPlainText(" + ");
    ui->textEdit->append("\n");


    aux = ui->textEdit->toPlainText().toDouble();

}

// subtração
void Dialog::on_pushButton_14_clicked()
{
    somaFlag = false;
    subFlag = true;
    multiFlag = false;
    divisaoFlag = false;

    erase = true;

    aux = ui->textEdit->toPlainText().toDouble();
}

// multiplicação
void Dialog::on_pushButton_15_clicked()
{
    somaFlag = false;
    subFlag = false;
    multiFlag = true;
    divisaoFlag = false;

    erase = true;

    aux = ui->textEdit->toPlainText().toDouble();
}

// divisão
void Dialog::on_pushButton_16_clicked()
{
    somaFlag = false;
    subFlag = false;
    multiFlag = false;
    divisaoFlag = true;

    erase = true;

    aux = ui->textEdit->toPlainText().toDouble();
}


// =
void Dialog::on_pushButton_17_clicked()
{
    double b = ui->textEdit->toPlainText().toDouble();
    std::string f = std::string();

    std::string content = std::string();
//    content = ui->textEdit->toPlainText().toStdString();
//    content.erase(std::remove(content.begin(), content.end(), '+'), content.end());

//    b = std::stod(content);

//    std::cout <<  "Valor de b: " << b << std::endl;
    std::cout<< f << std::endl;

    if(somaFlag==true)
    {
        b = calculo.soma(aux, b);


        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(QString::number(b));

    }

    if(subFlag==true)
    {
        b = calculo.sub(aux, b);


        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(QString::number(b));

    }

    if(divisaoFlag==true)
    {
        b = calculo.divisao(aux, b);


        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(QString::number(b));

    }

    if(multiFlag==true)
    {
        b = calculo.multi(aux, b);


        ui->textEdit->insertPlainText("\n");
        ui->textEdit->append(QString::number(b));

    }

    somaFlag = false;
    subFlag = false;
    divisaoFlag = false;
    multiFlag = false;

    erase = true;

    f = ui->textEdit->toPlainText().toStdString();
     printf("%s\n", f.c_str());
}

//Limpar
void Dialog::on_pushButton_12_clicked()
{
    ui->textEdit->clear();
}

void Dialog::on_pushButton_11_clicked()
{
     ui->textEdit->insertPlainText(".");
}
