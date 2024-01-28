#include <iostream>
using namespace std;
class Time {
	public:
		int hour, minute, second;
	public:
		void input () {
			cout << "Nhap gio: ";
			cin >> hour;
			cout << "Nhap phut: ";
			cin >> minute;
			cout << "Nhap giay: ";
			cin >> second;
		}
		void display () {
			cout << "Thoi gian da nhap la: " << ((hour <10) ? "0" : "") << hour << ":" << ((minute <10) ? "0" : "") << minute << ":" << ((second <10) ? "0" : "") << second << endl;
		}
};
int main () {
	Time t1;
	t1.input();
	t1.display();
}
