#include "core_mcu.hpp"
#include <string>
#include <iostream>

using namespace std;

// [TODO] : Implementasikan class core_mcu di file cpp ini
// [TIPS] : Gunakan CoreMCU::<nama methode> untuk mengimplementasikan methodenya
void Core_MCU::showSpek(){
    cout << "[SPEK DEVICE] : [NAMA _DEVICE]: " << nama << " | [CPU CLOCK] : " << cpu_speed << " | [MEMORY] : " << memory << " | [OS] : " << os << endl;
}

Core_MCU::Core_MCU(float a,int b,string c,string d,int e){
    cpu_speed = a;
    memory = b;
    os = c;
    nama = d;
    volt = e;
    cout << "[Core_MCU] : MCU utama yang bernama " << nama << " telah dibuat" << endl;
    showSpek();
}


Core_MCU::~Core_MCU(){
    cout << "[Core_MCU] : MCU utama yang bernama " << nama << " telah dihapus" << endl;
}

void Core_MCU::nambah_volt(int penambahan_voltase){
    volt = volt+penambahan_voltase;
    cout << "[Core_MCU] : MCU utama yang bernama " << nama << " telah ditambah voltasenya menjadi = " << volt << endl;
}

void Core_MCU::ganti_os(string new_os){
    os = new_os;
    cout << "[Core MCU] : MCU utama yang bernama " << nama << " telah diganti OS nya menjadi = " << os << endl;
}

string Core_MCU::get_os(){
    return os;
}
