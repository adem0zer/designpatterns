#include "../header/MonsterAbraA7_V11_1.h"

    MonsterAbraA7_V11_1::MonsterAbraA7_V11_1(){
        computer = new Computer();
    }

    void MonsterAbraA7_V11_1::buildMainBoard(){
        computer->setMainBoard("Mobile Intel® HM370 Chipset");
    }

    void MonsterAbraA7_V11_1::buildRam(){
        computer->setRam("8GB (1x8GB) DDR4L 1.2V 2666MHz SODIMM");
    }

    void MonsterAbraA7_V11_1::buildProcessor(){
        computer->setProcessor("Intel® Coffee Lake Core™ i7-9750H 6C/12T; 12MB L3; 8GT/s; 2.6GHz > 4.5GHz; 45W; 14nm");
    }

    void MonsterAbraA7_V11_1::buildGPU(){
        computer->setGPU("4GB GDDR5 nVIDIA® GeForce® GTX1650 128-Bit DX12");
    }

    void MonsterAbraA7_V11_1::buildMemory(){
        computer->setMemory("240GB M.2 SSD Sata 3 (Okuma: 550 MB/s - Yazma: 510 MB/s)");
    }

    void MonsterAbraA7_V11_1::buildDisplayScreen(){
        computer->setDisplayScreen("17,3\" FHD 1920x1080 Mat LED Ekran");
    }

    void MonsterAbraA7_V11_1::buildKeyboard(){
        computer->setKeyboard("RGB 4 Bölge Aydınlatmalı Klavye (Türkçe Q)");
    }

    Computer* MonsterAbraA7_V11_1::getComputer(){
        return computer;
    }
