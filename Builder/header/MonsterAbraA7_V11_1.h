#ifndef MonsterAbraA7_V11_1_H 
#define MonsterAbraA7_V11_1_H

#include "../header/Computer.h"
#include "../header/ComputerBuilder.h"

class MonsterAbraA7_V11_1 : public ComputerBuilder{
private:
    Computer* computer;
public:

    MonsterAbraA7_V11_1();

    void buildMainBoard();

    void buildRam();

    void buildProcessor();

    void buildGPU();

    void buildMemory();

    void buildDisplayScreen();

    void buildKeyboard();

    Computer* getComputer();

};


#endif