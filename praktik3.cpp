#include <array>
#include <iostream>

using namespace std;

int main() {
  // Deklarasi array nilai dengan tipe data pair
  array<pair<string, int>, 6> nilai;

  // Isi nilai array
  nilai[0] = make_pair("JOHN", 90);
  nilai[1] = make_pair("LUIS", 80);
  nilai[2] = make_pair("TOM", 70);
  nilai[3] = make_pair("ANGEL", 60);
  nilai[4] = make_pair("JONI", 50);
  nilai[5] = make_pair("MARCEL", 40);

  /**
   * Tampilkan data array menggunakan perulangan for
   * dengan maksimal perulangan sebanyak nilai.size() atau besar array
   */
  for (int i = 0; i < nilai.size(); i++) {
    cout << "Data ke - " << i << ": " << nilai[i].first << " dengan nilai : " << nilai[i].second << endl;
  }

  cout << endl;

  // Panggil data array dengan index tertentu
  cout << "Nama Mahasiswa : " << nilai[2].first << ", mendapatkan nilai : " << nilai[2].second << endl;
  cout << "Nama Mahasiswa : " << nilai[5].first << ", mendapatkan nilai : " << nilai[5].second << endl;

  return 0;
}