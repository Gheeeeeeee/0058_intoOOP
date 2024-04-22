// OOP1_TIB_0058.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Mahasiswa {
public: //akses modifier
    string nama;
    int umur;
    string jurusan;

    void output() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
    }
};


class Matakuliah {
private:
    string kodeMK;
    string namaMK;
    int sks;

public:
    void input() {
        cout << "Kode MK: ";
        cin >> kodeMK;
        cout << "Nama MK: ";
        cin >> namaMK;
        cout << "SKS: ";
        cin >> sks;
    }
    void output() {
        cout << "kode MK: " << kodeMK << endl;
        cout << "Nama MK: " << namaMK << endl;
        cout << "SKS: " << sks << endl;
    }
};
int main()
{
    Mahasiswa mhs;
    Matakuliah mk;

    mhs.nama = "budi";
    mhs.umur = 20;
    mhs.jurusan = "Teknik informatika";
    mhs.output();

    mk.input();
    mk.output();

    return 0;

}


