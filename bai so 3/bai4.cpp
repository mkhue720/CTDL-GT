#include <bits/stdc++.h>

using namespace std;
class Point {
	public:
		float x, y;
	public:
		void input() {
			cout << "Nhap hoanh do: ";
			cin >> x;
			cout << "Nhap tung do: ";
			cin >> y;
		}
		void display() {
			cout << "(" << x << ", " << y << ")";
		}
};

int main () {
	vector <Point> myvector;
	int n,i;
	cout << "nhap so phan tu: ";
	cin >> n;
	if (n <= 0) {
		return 1;
	} else {
		int x, y;
		for (i=0; i<n; i++) {
			cout << "nhap hoanh do diem thu " << i+1 <<": ";
			cin >>x;
			cout << "nhap tung do diem thu " << i+1 <<": ";
			cin >>y;
			myvector.push_back(Point{x, y});
		}
		cout << "danh sach diem: " << endl;
		for (i=0; i<n; i++) {
			myvector[i].display();
			if (i < n-1) {
				cout <<", ";
			}
		}
	}
}
