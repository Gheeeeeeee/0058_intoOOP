// OOP2_TIB_0058.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class bangunDatar {
    //akses modifier
private:
    float panjang, lebar;
public:
    float luas;

    void input(){//metode input persegi panjang
    
        cout << "Masukan Panjangnya: ";
        cin >> panjang;
        cout << "Masukan Lebarnya: ";
        cin >> lebar;
    }

    float hitungluas() {
        return panjang * lebar;
    };
    void display() {
        cout << "panjangnya = " << panjang << endl;
        cout << "lebarnya = " << lebar << endl;
        cout << "luasnya = " << hitungluas() << endl;

    };


};



int main()
{
    std::cout << "Hello World!\n";
}


