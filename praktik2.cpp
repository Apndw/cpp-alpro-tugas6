#include <iostream>

using namespace std;

/**
 * B. Buatlah program untuk menampilkan lirik lagu anak ayam sebagai berikut:
 * 
 * Masukkan jumlah ayam: 5
 * Anak ayam turun 5, mati satu tinggal 4
 * Anak ayam turun 4, mati satu tinggal 3
 * Anak ayam turun 3, mati satu tinggal 2
 * Anak ayam turun 2, mati satu tinggal 1
 * Anak ayam turun 1, mati satu tinggal induknya
 * 
 * Jumlah ayam yang dimasukkan oleh user bisa berbeda.
 */
int main() {
  // Deklarasi variabel untuk menyimpan jumlah ayam dan satuan ayam
  int jumlah, ayam;

  // Tampilkan pesan untuk meminta user memasukkan jumlah ayam
  cout << "Masukkan jumlah ayam: ";

  // Terima input dari user dan simpan di variabel jumlah
  cin >> jumlah;

  // Validasi nilai jumlah dengan syarat jumlah harus lebih dari 0
  if (jumlah <= 0) {
    cout << "Jumlah ayam harus lebih dari 0" << endl;
    return 0;
  }

  /**
   * Gunakan perulangan for untuk menampilkan lirik lagu anak ayam
   * 
   * Jika ayam tinggal satu, maka tampilkan "Anak ayam turun 1, mati satu tinggal induknya"
   * Jika ayam tinggal lebih dari satu, maka tampilkan "Anak ayam turun n, mati satu tinggal n-1"
   * nilai dari n index perulangan for
   */
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