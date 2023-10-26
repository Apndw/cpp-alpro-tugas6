#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int jumlah, ayam;

  cout << "Masukkan jumlah ayam: ";
  cin >> jumlah;

  for (ayam = jumlah; ayam > 0; ayam--) {
    cout << "Anak ayam turun " << ayam;

    if (ayam == 1) {
      cout << ", mati satu tinggal induknya" << endl;
    } else {
      cout << ", mati satu tinggal " << ayam - 1 << endl;
    }
  }

  return 0;
}