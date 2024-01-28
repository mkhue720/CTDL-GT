#include <iostream>
#include <string>
using namespace std;
class Student {
	public:
		string Name;
		int Tuoi;
		float Dtb;
	public:
		void input() {
			cout << "Ho va ten: ";
			cin.ignore();
			getline(cin, Name);
			cout << "Tuoi: ";
			cin >> Tuoi;
			cout << "Diem trung binh: ";
			cin >> Dtb;
		}
		void display() {
			cout << "Ho va ten: " << Name << endl << "Tuoi: " << Tuoi << endl << "Diem trung binh: " << Dtb << endl;
			cout << "--------------------------------" << endl;
		}
		bool dat() {
			return Dtb >= 5.0;
		}
};
int main() {
	int i, n;
	cout << "Nhap so hoc vien: ";
	cin >> n;
	if (n < 0) {
		cout << "So hoc vien nhap phai lon hon 0";
	}
	else {
		Student *hv = new Student[n];
		for (i=0; i<n; i++) {
			cout << "Nhap thong tin cho hoc vien thu " << i+1 << ": " <<endl;
			hv[i].input();
		}
		cout << "---------------------------------------------------------------" << endl;
		cout << "Danh sach hoc vien da nhap la: " << endl;
		for (i=0; i<n; i++) {
			cout << "Thong tin hoc vien thu " << i+1 << " la: " << endl;
			hv[i].display();
			if(hv[i].dat()) {
				cout << "Hoc vien dat." << endl;
			}
			else {
				cout << "Hoc vien khong dat." << endl;
			}
		}
		cout << "---------------------------------------------------------------" << endl;
		cout << "Danh sach hoc vien do la: " << endl;
		for (i=0; i<n; i++) {
			if(hv[i].dat()) {
				hv[i].display();
				cout << endl;
			}
		}
	}
}
