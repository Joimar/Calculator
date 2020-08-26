#include "calculador.h"

calculador::calculador()
{

}

double calculador::soma(double a, double b)
{
    return(a + b);
}

double calculador::sub(double a, double b)
{
    return(a - b);
}

double calculador::divisao(double a, double b)
{
    return(a/b);
}

double calculador::multi(double a, double b)
{
    return(a*b);
}

void calculador::setValor(double valorSalvo)
{
    this->valorSalvo = valorSalvo;
}

double calculador::getValor()
{
    return valorSalvo;
}
