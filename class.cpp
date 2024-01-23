#include <iostream>
using namespace std;
int UCLN (int a, int b) {
	int t;
	while (b!=0) {
		t = a % b;
		a = b;
		b = t;
	}
	return a;
}
class Phanso {
	public:
		int ts;
		int ms;
	public:
		void InPhanSo() {
			cout << ts<<"/"<<ms<<endl;
		}
		void Tich(int a) {
			ts *= a;
		}
		void Tong(int a){
			a *= ms;
			ts += a;
		}
		void toigian() {
			int max = UCLN(ts, ms);
			ts = ts/max;
			ms = ms/max;
		}
};
int main() {
	Phanso p1;
	p1.ts = 3;
	p1.ms = 5;
	p1.InPhanSo();
	p1.Tich(15);
	p1.toigian();
	p1.InPhanSo();
	p1.Tong(1);
	p1.toigian();
	p1.InPhanSo();
	
}
