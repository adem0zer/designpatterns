#include "../header/Monster.h"




    Monster::Monster(ComputerBuilder *computerBuilder) : computerBuilder(computerBuilder) {}

    Computer* Monster::getComputer(){
        return computerBuilder->getComputer();
    }

    void Monster::createComputer(){
        computerBuilder->buildMainBoard();
        computerBuilder->buildRam();
        computerBuilder->buildProcessor();
        computerBuilder->buildGPU();
        computerBuilder->buildMemory();
        computerBuilder->buildDisplayScreen();
        computerBuilder->buildKeyboard();
    }