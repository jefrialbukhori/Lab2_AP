#include <iostream>
using namespace std;

void sapa(string nama) {
    cout << "Halo " << nama << " ! Selamat Datang di AP 2 !" << endl;
}

int main () {
    string namaPengguna = "Alya";

    sapa(namaPengguna);

    return 0;
}