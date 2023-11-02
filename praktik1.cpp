#include <iostream>

using namespace std;

/**
 * A. Buatlah program untuk menampilkan menu pilihan berikut ini:
 * 1. Entry Data
 * 2. Cetak Laporan
 * 3. Tentang
 * 4. Halaman Utama
 * 5. Lihat Laporan
 * 6. Keluar
 * 
 * Pilihan yang dimasukkan oleh user akan ditampilkan di layar.
 * Jika user memasukkan pilihan yang tidak tersedia, maka tampilkan
 * pesan "Pilihan tidak tersedia".
 */
int main() {
  // Tampilkan menu pilihan ke layar menggunakan fungsi cout
  cout << "1: Entry Data" << endl;
  cout << "2: Cetak Laporan" << endl;
  cout << "3: Tentang" << endl;
  cout << "4: Halaman Utama" << endl;
  cout << "5: Lihat Laporan" << endl;
  cout << "6: Keluar" << endl;

  // Deklarasi variabel untuk menyimpan pilihan user
  int pilihan;

  // Tampilkan pesan untuk meminta user memasukkan pilihan
  cout << "Masukkan pilihan: ";

  // Terima input dari user dan simpan di variabel pilihan
  cin >> pilihan;

  /**
   * Gunakan switch untuk mengecek pilihan user
   * dan tampilkan pesan sesuai pilihan user
   * 
   * Jika user memasukkan pilihan yang tidak tersedia,
   * tampilkan pesan "Pilihan tidak tersedia"
   */
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

  // Selesai
  return 0;
}