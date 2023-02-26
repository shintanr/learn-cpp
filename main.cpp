#include <iostream>
#include <string>

using namespace std;

// class tanpa constructor

class Polos {
 public:
    string dataString;
    int dataInteger;

};

// class dengan constructor

class Mahasiswa {
public :
    string nama;
    string NIM;
    string jurusan;
    double IPK;
    Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK){
        Mahasiswa::nama = inputNama;
        Mahasiswa::NIM = inputNIM;
        Mahasiswa::jurusan = inputJurusan;
        Mahasiswa::IPK = inputIPK;

        // cara membuatnya bisa juga dengan begini

        cout<< Mahasiswa::nama << endl;
        cout<< Mahasiswa::NIM  << endl;
        cout<< Mahasiswa::jurusan  << endl;
        cout<< Mahasiswa::IPK  << endl;
    }

    // constructor dengan parameter
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("Shinta", "123456", "teknik informatika", 4.0);

    Mahasiswa mahasiswa2 = Mahasiswa("Senku", "123457", "teknik perkapalan", 3.9);


    return 0;
}
