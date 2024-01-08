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
		float S, tu, mau;
		int a;
		cout << "nhap x: ";
		cin >> x;
		mau = 0;
		S = 0;
		for (i=1; i<=n; i++) {
			tu = pow(x, i);
			mau = mau + 1.0/i;
			S = S + pow((-1), i-1) * (tu/mau);
		}
		cout << "S = " << S;
	}
}
