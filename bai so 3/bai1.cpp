#include <bits/stdc++.h>

using namespace std;
int main() {
	vector<int> myvector;
	int n, i, tmp, S;
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
		S = 0;
		for (i=0; i<n; i++) {
			S += myvector[i];
		}
		cout << "S = " << S;
	}
}
