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
};
class Tamgiac {
	public:
		Point p1, p2, p3;
	public:
		void inputpoint() {
//			cout << "Nhap toa do diem thu nhat: " << endl;
//			p1.input();
//			cout << "Nhap toa do diem thu hai: " << endl;
//			p2.input();
//			cout << "Nhap toa do diem thu ba: " << endl;
//			p3.input();
			Point *points[] = {&p1, &p2, &p3};
        	for (int i = 0; i < 3; ++i) {
            	cout << "Nhap toa do diem thu " << i + 1 << " la: " << endl;
            	points[i]->input();
        	}
		}
		void displaypoint() {
//			cout << "Toa do diem thu nhat la: ";
//			p1.display();
//			cout << "\nToa do diem thu hai la: ";
//			p2.display();
//			cout << "\nToa do diem thu ba la: ";
//			p3.display();
			Point *points[] = {&p1, &p2, &p3};
			for (int i = 0; i < 3; ++i) {
            	cout << "Toa do diem thu " << i + 1 << " la: " << endl;
            	points[i]->display();
        	}
		}
		float khoangcach(Point d1, Point d2) {
			return sqrt(pow((d1.x - d2.x), 2) + pow((d1.y - d2.y), 2));
		}
		float tinhP() {
			float a = khoangcach(p1, p2);
			float b = khoangcach(p2, p3);
			float c = khoangcach(p3, p1);
			return a + b + c;
		}
		float tinhS() {
			float a = khoangcach(p1, p2);
			float b = khoangcach(p2, p3);
			float c = khoangcach(p3, p1);
			float p = (a + b + c) / 2;
			return sqrt(p * (p - a) * (p - b) * (p - c));
		}
};
int main () {
	Tamgiac t;
	cout << "Nhap toa do cac dinh tam giac: " << endl;
	t.inputpoint();
	cout << "Toa do 3 dinh tam giac la: " << endl;
	t.displaypoint();
	float S = t.tinhS();
	float P = t.tinhP();
	cout << "Dien tich tam giac la: " << S <<endl;
	cout << "Chu vi tam giac la: " << P <<endl;
}
