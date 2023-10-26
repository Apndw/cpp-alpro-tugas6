#include <array>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::array;
using std::string;
using std::make_pair;

int main() {
  array<pair<string, int>, 6> nilai;

  nilai[0] = make_pair("JOHN", 90);
  nilai[1] = make_pair("LUIS", 80);
  nilai[2] = make_pair("TOM", 70);
  nilai[3] = make_pair("ANGEL", 60);
  nilai[4] = make_pair("JONI", 50);
  nilai[5] = make_pair("MARCEL", 40);

  int i, k, j = 0;

  for (i = 0; i < nilai.size(); i++) {
    cout << "Data ke - " << i << ": " << nilai[i].first << " dengan nilai : " << nilai[i].second << endl;
  }

  cout << endl;

  for (k = 0; k < nilai.size(); k++) {
    if (j == 2) {
      cout << "Nama Mahasiswa : " << nilai[k].first << ", mendapatkan nilai : " << nilai[k].second << endl;
      j = 0;
    } else {
      j++;
    }
  }

  return 0;
}