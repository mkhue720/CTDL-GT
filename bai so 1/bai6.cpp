#include <iostream>
using namespace std;
int main () {
	int n, k, i, j;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	if (n<=0) {
		cout << "So phan tu phai lon hon 0" << endl;
	}
	else {
		int mang[n];
		cout << "Nhap cac phan tu cua mang:" << endl;
		for (i=0; i<n; i++) {
			cout << "Phan tu thu " << i+1 <<": ";
			cin >> mang[i];
		}
		cout << "Nhap so phan tu chuyen ve cuoi: ";
		cin >>k;
		for (i=0; i<k; i++) {
			int a = mang[0];
			for (j=0; j<n-1; j++) {
				mang[j] = mang[j+1];
			}
			mang[n-1] = a;
		}
		cout << "Mang sau khi chuyen " << k << "phan tu ve cuoi: " <<endl;
		for (i=0; i<n; i++) {
			cout << mang[i] << " ";
		}
	}
}
