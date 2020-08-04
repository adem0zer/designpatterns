#ifndef ComputerParts_H 
#define ComputerParts_H

#include <iostream>

using namespace std;

class ComputerParts{
public:
    virtual void setMainBoard(const string &MainBoard) = 0;

    virtual void setRam(const string &Ram) = 0;

    virtual void setProcessor(const string &Processor) = 0;

    virtual void setGPU(const string &GPU) = 0;

    virtual void setMemory(const string &Memory) = 0;

    virtual void setDisplayScreen(const string &DisplayScreen) = 0;

    virtual void setKeyboard(const string &Keyboard) = 0;
};

#endif 