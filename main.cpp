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
    void showData()
    {
        cout << "Nama saya adalah " << name << ", nim " << nim << " telah mengambil matkul " << matkul << " dan memperoleh nilai " << nilai << endl;
    }

    // method dengan parameter dan tanpa erturn

    void update(const char* newName)
    {
        Mahasiswa::name = newName;
    }

    // method tanpa parameter dan dengan return
    string getName ()
    {
        return Mahasiswa::name;
    }

    string getNim ()
    {
        return Mahasiswa::nim;
    }

    string getMatkul ()
    {
        return Mahasiswa::matkul;
    }

    int getNilai()
    {
        return nilai;
    }


    // method dengan parameter dan return

    int bonusNilai(const int &tambahNilai)
    {
        return Mahasiswa::nilai + tambahNilai;
    }
};


int main ()
{
    Mahasiswa mahasiswa1 = Mahasiswa("shinta", "21120121140093", "DKP", 85);
    mahasiswa1.showData();

    mahasiswa1.update("nur");
    mahasiswa1.showData();

    string dataName = mahasiswa1.getName();
    cout << "data nama = " << dataName << endl;
    cout << "data nim = " << mahasiswa1.getNim() << endl;
    cout << "Nilai akhir " << mahasiswa1.bonusNilai(10) << endl;

return 0;
}
