#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int a, b, c;
	cout << "nhap 3 so: ";
	cin >> a >> b >> c;
	if (a>0 && b>0 && c>0) {
		if (pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(c,2) + pow(b,2) == pow(a,2)) {
			cout << endl << "3 so tren tao thanh tam giac vuong" << endl; 
		}
		else {
			cout << endl << "3 so tren khong tao thanh tam giac vuong" << endl; 
		}
	}
	else {
		cout << endl << "3 so tren khong tao thanh tam giac vuong" << endl; 
	}
}
