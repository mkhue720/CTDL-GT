#include <bits/stdc++.h>

using namespace std;
int main() {
	vector <int> myvector;
	int n, i, tmp, x, count;
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
		count = 0;
		cout << "nhap x: ";
		cin >>x;
		for (i=0; i<n; i++) {
			if (myvector[i] == x) {
				count++;
			} 
		}
		cout << "gia tri " << x << " xuat hien " << count << " lan trong vector";
	}
}
