#ifndef INTERATORINTERFACE_H
#define INTERATORINTERFACE_H
#include <string>

class InteratorInterface
{
public:
    InteratorInterface();
    void eraseSubStr(std::string & mainStr, const std::string toErase);
};

#endif // INTERATORINTERFACE_H
