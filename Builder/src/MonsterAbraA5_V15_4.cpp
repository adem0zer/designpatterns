#include "../header/MonsterAbraA5_V15_4.h"


    MonsterAbraA5_V15_4::MonsterAbraA5_V15_4(){
        computer = new Computer();
    }
    void MonsterAbraA5_V15_4::buildMainBoard(){
        computer->setMainBoard("Mobile Intel® HM370 Chipset");
    }

    void MonsterAbraA5_V15_4::buildRam(){
        computer->setRam("8GB (1x8GB) DDR4L 1.2V 2666MHz SODIMM");
    }

    void MonsterAbraA5_V15_4::buildProcessor(){
        computer->setProcessor("Intel® Coffee Lake Core™ i7-9750H 6C/12T; 12MB L3; 8GT/s; 2.6GHz > 4.5GHz; 45W; 14nm");
    }

    void MonsterAbraA5_V15_4::buildGPU(){
        computer->setGPU("3GB GDDR5 nVIDIA® GeForce® GTX1050 DX12 (2019 Sürümü)");
    }

    void MonsterAbraA5_V15_4::buildMemory(){
        computer->setMemory("240GB M.2 SSD Sata 3 (Okuma: 550 MB/s - Yazma: 510 MB/s)");
    }

    void MonsterAbraA5_V15_4::buildDisplayScreen(){
        computer->setDisplayScreen("15,6\" FHD 1920x1080 IPS Mat LED Ekran");
    }

    void MonsterAbraA5_V15_4::buildKeyboard(){
        computer->setKeyboard("RGB 4 Bölge Aydınlatmalı Klavye (Türkçe Q)");
    }

    Computer* MonsterAbraA5_V15_4::getComputer(){
        return this->computer;
    }