#ifndef Monster_H 
#define Monster_H

#include "../header/Computer.h"
#include "../header/ComputerBuilder.h"

class Monster{
private:
    ComputerBuilder* computerBuilder;
public:
    Monster(ComputerBuilder *computerBuilder);

    Computer* getComputer();

    void createComputer();
};


#endif 