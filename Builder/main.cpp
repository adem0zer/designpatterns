#include <iostream>

#include "../header/ComputerBuilder.h"
#include "../header/MonsterAbraA5_V15_4.h"
#include "../header/MonsterAbraA7_V11_1.h"
#include "../header/Monster.h"


int main(int, char**) {
    ComputerBuilder *abraA5 = new MonsterAbraA5_V15_4();
    ComputerBuilder *abraA7 = new MonsterAbraA7_V11_1();

    Monster *m1 = new Monster(abraA5);
    Monster *m2 = new Monster(abraA7);

    m1->createComputer();
    Computer *cmpA5 = m1->getComputer();
    cout << "Abra A5: " << cmpA5 << endl;

    m2->createComputer();
    Computer *cmpA7 = m2->getComputer();
    cout << "Abra A7: " << cmpA7 << endl;
}
