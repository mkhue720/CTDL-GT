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
		void toigian() {
			int max = UCLN(ts, ms);
			ts = ts/max;
			ms = ms/max;
		}
		void Tong2ps(Phanso b) {
			ts = ts * b.ms + ms * b.ms;
			ms = ms * b.ms;
			toigian();
		}
		void quydong(Phanso b) {
			ts = ts * b.ms;
			ms = ms * b.ms;
		}
		void sosanh(Phanso b) {
			b.quydong();
			
		}
};
int main() {
	
}
