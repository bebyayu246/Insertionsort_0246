#include <iostream>
using namespace std;

int arr[20]; //membuat Array dengan panjang data 20
int n; //membuat variable inputan n

void input()
{ //procedure input
    while (true)
{
    cout << "Masukkan Jumlah Data pada Array : "; //membuat inputan jumlah elemen array
    cin >> n; //memanggil variable inputan n

    if ( n <= 20)
{ //membuat kondisi n tidak lebih dari 20
    break;
}
else
{
    cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // menampilkan pesan jika data lebih dari 20
}
}

}