#include "interatorinterface.h"
#include <iostream>

//Agora só falta cuidar de cálculos de mais de uma operação

InteratorInterface::InteratorInterface()
{

}

void InteratorInterface::eraseSubStr(std::string & mainStr, std::string toErase)
{
    // Search for the substring in string
    size_t pos = mainStr.find(toErase);
    if (pos != std::string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
    }
}

void InteratorInterface::parse(std::string content, double &a, double &b)
{
    a = 0.0;
    b = 0.0;
    std::string auxA;
    std::string auxB;
    std::size_t signal;

    signal = content.find("+");
    if(signal!=std::string::npos)
    {
        auxB = content.substr(signal);
        eraseSubStr(auxB, "+");
        eraseSubStr(auxB, " ");
        b = std::stod(auxB); // Segundo termo definido

        eraseSubStr(content, " + "+auxB); // O problema tá aqui
//        eraseSubStr(content, " ");
//        eraseSubStr(content, "+");

        auxA = content;
        a = std::stod(auxA);

    }

    signal = content.find("-");
    if(signal!=std::string::npos)
    {
        auxB = content.substr(signal);
        eraseSubStr(auxB, "-");
        eraseSubStr(auxB, " ");
        b = std::stod(auxB); // Segundo termo definido

        eraseSubStr(content, " - "+ auxB);
//        eraseSubStr(content, " ");
//        eraseSubStr(content, "-");

        auxA = content;
        a = std::stod(auxA);

    }

    signal = content.find("*");
    if(signal!=std::string::npos)
    {
        auxB = content.substr(signal);
        eraseSubStr(auxB, "*");
        eraseSubStr(auxB, " ");
        b = std::stod(auxB); // Segundo termo definido

        eraseSubStr(content, " * "+auxB);
//        eraseSubStr(content, " ");
//        eraseSubStr(content, "*");

        auxA = content;
        a = std::stod(auxA);

    }

    signal = content.find("/");
    if(signal!=std::string::npos)
    {
        auxB = content.substr(signal);
        eraseSubStr(auxB, "/");
        eraseSubStr(auxB, " ");
        b = std::stod(auxB); // Segundo termo definido

        eraseSubStr(content, " / "+ auxB);
//        eraseSubStr(content, " ");
//        eraseSubStr(content, "/");

        auxA = content;
        a = std::stod(auxA);

    }

    std::cout << "Valor de a: " << a << std::endl;
    std::cout << "Valor de b: " << b << std::endl;


}
