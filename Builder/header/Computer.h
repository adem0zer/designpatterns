#ifndef Computer_H 
#define Computer_H

#include <string>
#include "ComputerParts.h"

using namespace std;

class Computer : public ComputerParts{
public:
    string MainBoard;
    string Ram;
    string Processor;
    string GPU;
    string Memory;
    string DisplayScreen;
    string Keyboard;
public:
    void setMainBoard(const string &mainBoard);

    void setRam(const string &ram);

    void setProcessor(const string &processor);

    void setGPU(const string &gpu);

    void setMemory(const string &memory);

    void setDisplayScreen(const string &displayScreen);

    void setKeyboard(const string &keyboard);
};

#endif 