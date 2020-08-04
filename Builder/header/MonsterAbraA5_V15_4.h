#ifndef MonsterAbraA5_V15_4_H 
#define MonsterAbraA5_V15_4_H

#include "../header/Computer.h"
#include "../header/ComputerBuilder.h"

class MonsterAbraA5_V15_4 : public ComputerBuilder{
private:
    Computer *computer;
public:
    MonsterAbraA5_V15_4();
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