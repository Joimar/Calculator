#include "interatorinterface.h"

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
