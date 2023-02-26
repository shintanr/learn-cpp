#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
public:
    string name;
    string nim;
    string matkul;
    int nilai;

    Mahasiswa(string name, string nim, string matkul, int nilai){
        Mahasiswa::name = name;
        Mahasiswa::nim = nim;
        Mahasiswa::matkul = matkul;
        Mahasiswa::nilai = nilai;
    }

    // method tanpa parameter dan tanpa return
    void tampilkanData()
    {
        cout << "Nama saya adalah " << name << ", nim " << nim << " telah mengambil matkul " << matkul << " dan memperoleh nilai " << nilai << endl;
    }
};


int main ()
{
    Mahasiswa mahasiswa1 = Mahasiswa("shinta", "21120121140093", "DKP", 85);
    mahasiswa1.tampilkanData();

return 0;
}
