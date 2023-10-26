#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  cout << "1: Entry Data" << endl;
  cout << "2: Cetak Laporan" << endl;
  cout << "3: Tentang" << endl;
  cout << "4: Halaman Utama" << endl;
  cout << "5: Lihat Laporan" << endl;
  cout << "6: Keluar" << endl;

  int pilihan;
  cout << "Masukkan pilihan: ";
  cin >> pilihan;

  switch (pilihan) {
    case 1:
      cout << "Entry Data" << endl;
      break;
    case 2:
      cout << "Cetak Laporan" << endl;
      break;
    case 3:
      cout << "Tentang" << endl;
      break;
    case 4:
      cout << "Halaman Utama" << endl;
      break;
    case 5:
      cout << "Lihat Laporan" << endl;
      break;
    case 6:
      cout << "Keluar" << endl;
      break;
    default:
      cout << "Pilihan tidak tersedia" << endl;
      break;
  }

  return 0;
}