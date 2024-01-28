#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int n, i;
	cout << "nhap n: ";
	cin >> n;
	if (n<0) {
		cout << "n phai lon hon 0";
	}
	else {
		float x;
		float S = 1;
		int mau = 1;
		cout << "nhap x: ";
		cin >> x;
		for (i=1; i<=n; i++) {
			mau = mau * i;
			S = S + pow(x, i) / mau;
		}
		cout << "S = " << S;
	}
}
