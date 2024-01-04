#include <iostream>
using namespace std;
int main () {
	int x, y, a;
	int *p1 = &x;
	int *p2 = &y;
	cout << "Nhap so thu nhat: ";
	cin >> x;
	cout << "Nhap so thu hai: ";
	cin >> y;
	cout << "Truoc khi hoan doi: " << endl;
  	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	a = *p1;
	*p1=*p2;
	*p2=a;
	cout << "Sau khi hoan doi: " << endl;
  	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}
