#include <iostream>
using namespace std;

class siswa;
class orang 
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
private: 
    int id;

public:
    void setId(int pId);
    void setdisplayAll(orang& a);
};

void siswa::setdisplayAll(orang& a)
{
    cout << id << endl << a.nama;
}


int main()
{
    
}

