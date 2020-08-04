#ifndef ComputerBuilder_H 
#define ComputerBuilder_H

#include "Computer.h"

class ComputerBuilder{
public:

    virtual void buildMainBoard() = 0;

    virtual void buildRam() = 0;

    virtual void buildProcessor() = 0;

    virtual void buildGPU() = 0;

    virtual void buildMemory() = 0;

    virtual void buildDisplayScreen() = 0;

    virtual void buildKeyboard() = 0;

    virtual Computer* getComputer() = 0;
};


#endif 