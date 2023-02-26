#include <iostream>
#include <string>

using namespace std;

class DenganConstructor {
public:
    string data;

    DenganConstructor (const char* data){
        DenganConstructor::data = data;
    }

    void show(){
    cout << "ini " << DenganConstructor::data << endl;
    }
};

class TanpaConstructor {
public:
    string data;


    void show(){
    cout << "ini " << TanpaConstructor::data << endl;
    }
};



int main()
{
    DenganConstructor pakai = DenganConstructor("pakai 1");
    pakai.show();


    // yang ini struktur datanya ada di stack
    DenganConstructor pakai2("pakai 2");
    pakai2.show();

    // cara membuat objek di heap memory
    DenganConstructor* pakai3 = new DenganConstructor("pakai 3");
    (*pakai3).show(); // dengan cara dereference
    pakai3->show(); // arrow operator. mapping function atau attribute dari pointer
    cout << pakai3->data << endl;

    // atau

    string data = pakai3->data;
    cout << data << endl;



    TanpaConstructor tanpa;
    tanpa.data = "objek tanpa constructor";
    tanpa.show();


    // tidak bisa atau akan error

    // DenganConstructor pakai4;
    // pakai4 = DenganConstructor("pakai 4");


    // yang ini bisa
    DenganConstructor* pakai5;
    pakai5 = new DenganConstructor("pakai 5");
    pakai5->show();

    return 0;
}
