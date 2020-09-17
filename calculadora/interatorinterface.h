#ifndef INTERATORINTERFACE_H
#define INTERATORINTERFACE_H
#include <string>

class InteratorInterface
{
public:
    InteratorInterface();
    void eraseSubStr(std::string & mainStr, const std::string toErase);
    void parse(std::string content, double &a, double &b);
};

#endif // INTERATORINTERFACE_H
