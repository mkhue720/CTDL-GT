#include <iostream>
using namespace std;
int main () {
	int x, y;
	cout << "Nhap so thu nhat: ";
	cin >> x;
	cout << "Nhap so thu hai: ";
	cin >> y;
	cout << "Truoc khi hoan doi: " << endl;
  	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	int *px = &x;
	int *py = &y;
	cout << "*px = " << px <<endl;
	cout << "*py = " << py <<endl;
	*px = *px + *py;
	cout << "*px = " << px <<endl;
	*py = *px - *py;
	cout << "*py = " << py <<endl;
	*px = *px - *py;
	cout << "*px = " << px <<endl;
	cout << "Sau khi hoan doi: " << endl;
  	cout << "x = " << *px << endl;
	cout << "y = " << *py << endl;
}
