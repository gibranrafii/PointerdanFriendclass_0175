#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim() {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa mhs{ 1 }; //Object mhs
    mhs.showNim();    //Member access Operator

    mahasiswa& refMhs = mhs; // Pointer references reffMhs
    refMhs.nim = 2; // Member access operator
    mhs.showNim();

    mahasiswa* pMhs = &mhs; //pointer Deferences pMhs
    pMhs->nim = 3;  // Arrow Operator
    pMhs->showNim();
    return 0;
}