#include <iostream>
 
using namespace std;
 
int main()
{
  int pilihan;
  char ulang;
  do
  {
    cout << "##  Daftar Menu Jasa Joki  ##" << endl;
    cout << "==============================" << endl;
    cout << "1. Epic - Legend" << endl;
    cout << "2. Legend - Mythic" << endl;
    cout << "3. Mythic - Honor " << endl;
    cout << "4. Honor - Glory" << endl;
    cout << "5. Glory - Immortal" << endl;
    cout << endl;
 
    cout << "Pilihan anda: ";
    cin >> pilihan;
 
    switch(pilihan){
    case 1:
        cout << "Anda memilih Epic - Legend" << endl;
        break;
    case 2:
        cout << "Anda memilih Legend - Mythic" << endl;
        break;
    case 3:
        cout << "Anda memilih Mythic - Honor" << endl;
        break;
    case 4:
        cout << "Anda memilih Honor - Glory" << endl;
        break;
    case 5:
        cout << "Anda memilih Glory - Immortal" << endl;
        break;
    default:
        cout << "Joki tidak tersedia" << endl;
    }
    cout << endl;
 
    cout << "Ingin memilih joki lain (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang!= 't');
 
  cout << "Pesanan Sedang Diproses";
  cout << endl;
  cout << "Terimakasih...";
 
  cout << endl;
  return 0;
}
