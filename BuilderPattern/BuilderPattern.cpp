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

class Computer : public ComputerParts{
private:
    string MainBoard;
    string Ram;
    string Processor;
    string GPU;
    string Memory;
    string DisplayScreen;
    string Keyboard;
public:
    void setMainBoard(const string &mainBoard) {
        MainBoard = mainBoard;
    }

    void setRam(const string &ram) {
        Ram = ram;
    }

    void setProcessor(const string &processor) {
        Processor = processor;
    }

    void setGPU(const string &gpu) {
        GPU = gpu;
    }

    void setMemory(const string &memory) {
        Memory = memory;
    }

    void setDisplayScreen(const string &displayScreen) {
        DisplayScreen = displayScreen;
    }

    void setKeyboard(const string &keyboard) {
        Keyboard = keyboard;
    }

};

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

class MonsterAbraA5_V15_4 : public ComputerBuilder{
private:
    Computer *computer;
public:
    MonsterAbraA5_V15_4(){
        computer = new Computer();
    }
    void buildMainBoard(){
        computer->setMainBoard("Mobile Intel® HM370 Chipset");
    }

    void buildRam(){
        computer->setRam("8GB (1x8GB) DDR4L 1.2V 2666MHz SODIMM");
    }

    void buildProcessor(){
        computer->setProcessor("Intel® Coffee Lake Core™ i7-9750H 6C/12T; 12MB L3; 8GT/s; 2.6GHz > 4.5GHz; 45W; 14nm");
    }

    void buildGPU(){
        computer->setGPU("3GB GDDR5 nVIDIA® GeForce® GTX1050 DX12 (2019 Sürümü)");
    }

    void buildMemory(){
        computer->setMemory("240GB M.2 SSD Sata 3 (Okuma: 550 MB/s - Yazma: 510 MB/s)");
    }

    void buildDisplayScreen(){
        computer->setDisplayScreen("15,6\" FHD 1920x1080 IPS Mat LED Ekran");
    }

    void buildKeyboard(){
        computer->setKeyboard("RGB 4 Bölge Aydınlatmalı Klavye (Türkçe Q)");
    }

    Computer* getComputer(){
        return this->computer;
    }
};



class MonsterAbraA7_V11_1 : public ComputerBuilder{
private:
    Computer* computer;
public:

    MonsterAbraA7_V11_1(){
        computer = new Computer();
    }

    void buildMainBoard(){
        computer->setMainBoard("Mobile Intel® HM370 Chipset");
    }

    void buildRam(){
        computer->setRam("8GB (1x8GB) DDR4L 1.2V 2666MHz SODIMM");
    }

    void buildProcessor(){
        computer->setProcessor("Intel® Coffee Lake Core™ i7-9750H 6C/12T; 12MB L3; 8GT/s; 2.6GHz > 4.5GHz; 45W; 14nm");
    }

    void buildGPU(){
        computer->setGPU("4GB GDDR5 nVIDIA® GeForce® GTX1650 128-Bit DX12");
    }

    void buildMemory(){
        computer->setMemory("240GB M.2 SSD Sata 3 (Okuma: 550 MB/s - Yazma: 510 MB/s)");
    }

    void buildDisplayScreen(){
        computer->setDisplayScreen("17,3\" FHD 1920x1080 Mat LED Ekran");
    }

    void buildKeyboard(){
        computer->setKeyboard("RGB 4 Bölge Aydınlatmalı Klavye (Türkçe Q)");
    }

    Computer* getComputer(){
        return computer;
    }

};

class Monster{
private:
    ComputerBuilder* computerBuilder;
public:
    Monster(ComputerBuilder *computerBuilder) : computerBuilder(computerBuilder) {}

    Computer* getComputer(){
        return computerBuilder->getComputer();
    }

    void createComputer(){
        computerBuilder->buildMainBoard();
        computerBuilder->buildRam();
        computerBuilder->buildProcessor();
        computerBuilder->buildGPU();
        computerBuilder->buildMemory();
        computerBuilder->buildDisplayScreen();
        computerBuilder->buildKeyboard();
    }
};


int main() {

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


    return 0;
}
