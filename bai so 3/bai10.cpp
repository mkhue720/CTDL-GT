#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> myvector;
	int n, i, tmp, x;
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
		cout << "vector nhap vao la: " <<endl;
		for (vector <int>::iterator i=myvector.begin(); i!=myvector.end(); ++i) {
				cout << *i << " ";
		}
		reverse(myvector.begin(), myvector.end());
		cout << endl << "vector dao nguoc la: " <<endl;
		for (vector <int>::iterator i=myvector.begin(); i!=myvector.end(); ++i) {
				cout << *i << " ";
		}
	}
}
