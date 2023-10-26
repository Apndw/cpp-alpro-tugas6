#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  char nilai[6][2][20] = {
    {"JOHN", "90"},
    {"LUIS", "80"},
    {"TOM", "70"},
    {"ANGEL", "60"},
    {"JONI", "50"},
    {"MARCEL", "40"}
  };

  int i, k;
  int jml_data = sizeof(nilai)/sizeof(nilai[0]);

  for (i = 0; i < jml_data; i++) {
    cout << "Data ke - " << i << ": " << nilai[i][0] << " dengan nilai : " << nilai[i][1] << endl;
  }

  cout << endl;

  for (k = 1; k <= jml_data; k++) {
    if (k % 3 == 0) {
      cout << "Nama Mahasiswa : " << nilai[k-1][0] << ", mendapatkan nilai : " << nilai[k-1][1] << endl;
    }
  }

  return 0;
}