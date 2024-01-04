#include <iostream>
#include <string>
using namespace std;
int main() {
  string chuoi;
  cout << "Nhap vao chuoi: ";
  getline(cin, chuoi);
  string hoa = "";
  string thuong = "";
  for(int i = 0; i < chuoi.length(); i++) {
    if(chuoi[i] >= 'a' && chuoi[i] <= 'z') {
      hoa += chuoi[i] - 32; 
      thuong += chuoi[i];
    }
    else if(chuoi[i] >= 'A' && chuoi[i] <= 'Z') {
      hoa += chuoi[i];
      thuong += chuoi[i] + 32;
    }
    else {
      hoa += chuoi[i];
      thuong += chuoi[i];
    }
  } 
  cout << "Chuoi viet hoa: " << hoa << endl;
  cout << "Chuoi viet thuong: " << thuong << endl; 
  return 0;
}
