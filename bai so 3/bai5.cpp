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
		cout << endl << "nhap gia tri can xoa: ";
		cin >> x;
		myvector.erase(remove(myvector.begin(), myvector.end(), x), myvector.end());
		cout << "vector sau khi xoa la: " <<endl;
		for (vector <int>::iterator i=myvector.begin(); i!=myvector.end(); ++i) {
				cout << *i << " ";
		}
	}
}
