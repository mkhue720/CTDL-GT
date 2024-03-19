#include <iostream>
#include <cmath>
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
			cout << "Toa do diem la: (" << x << ", " << y << ")" << endl;
		}
		float distance (Point d) {
			return sqrt(pow((d.x - x), 2) + pow((d.y - y), 2) );
		}
};
int main () {
	Point p1, p2;
	float khoangcach;
	cout << "Nhap toa do diem thu nhat: " << endl;
	p1.input();
	cout << "Nhap toa do diem thu hai: " << endl;
	p2.input();
	p1.display();
	p2.display();
	khoangcach = p1.distance(p2);
	cout << "Khoang cach giua 2 diem la: " << khoangcach;
}
