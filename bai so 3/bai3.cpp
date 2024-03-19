#include <bits/stdc++.h>

using namespace std;
int main() {
	vector <int> myvector;
	int n, i, j, tmp, t, select;
	cout << "nhap so phan tu: ";
	cin >> n;
	if (n <= 0) {
		return 1;
	} else {
		for (i=0; i<n; i++) {
			cout << "nhap gia tri thu " << i+1 << ": ";
			cin >> tmp;
			myvector.push_back(tmp);
		}
		cout << "moi nhap 1 de sap xep theo thu tu tang dan" << endl << "moi nhap 2 de sap xep theo thu tu giam dan" << endl << "nhap [1] hoac [2] ";
		cin >> select;
		if (select == 1) {
			for (i=0; i<n-1; i++) {
				for (j=0; j<n-i-1; j++) {
					if (myvector[j] > myvector[j+1]) {
						t = myvector[j];
						myvector[j] = myvector[j+1];
						myvector[j+1] = t;
					}
				}
			}
			cout << "vector sau khi sap xep theo thu tu tang dan la: " << endl;
			for (std::vector <int>:: const_iterator i=myvector.begin(); i!=myvector.end(); ++i) {
				cout << *i << " ";
			}
		} else if (select == 2) {
			for (i=0; i<n-1; i++) {
				for (j=0; j<n-i-1; j++) {
					if (myvector[j] < myvector[j+1]) {
						t = myvector[j];
						myvector[j] = myvector[j+1];
						myvector[j+1] = t;
					}
				}
			}
			cout << "vector sau khi sap xep theo thu tu tang dan la: " << endl;
			for (vector <int>::iterator i=myvector.begin(); i!=myvector.end(); ++i) {
				cout << *i << " ";
			}
		} else {
			return 1;
		}
	}
}
