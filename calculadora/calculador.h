#ifndef CALCULADOR_H
#define CALCULADOR_H


class calculador
{
public:
    calculador();
    double soma(double a, double b);
    double sub(double a, double b);
    double divisao(double a, double b);
    double multi(double a, double b);

    void setValor(double valorSalvo);
    double getValor();


private:
    double valorSalvo = 0.0;

};

#endif // CALCULADOR_H
