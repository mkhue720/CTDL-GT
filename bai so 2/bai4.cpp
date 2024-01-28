#include <iostream>
#include <string>
using namespace std;
class Book {
	public:
		string title;
		string author;
		int year;
	public:
		void input() {
			cout << "Nhap ten sach: ";
			cin.ignore();
			getline(cin, title);
			cout << "Nhap ten tac gia: ";
			getline(cin, author);
			cout << "Nam xuat ban: ";
			cin >> year;
		}
		void display() {
			cout << "Ten sach: " << title << endl << "Tac gia: " << author << endl << "Nam xuat ban: " << year << endl;
			cout << "--------------------------------" << endl;
		}
};
int main () {
	int i, n;
	cout << "Nhap so sach muon nhap: ";
	cin >> n;
	if (n < 0) {
		cout << "So sach nhap phai lon hon 0";
	}
	else {
		Book *books = new Book[n];
		for (i=0; i<n; i++) {
			cout << "Nhap thong tin cho sach thu " << i+1 << ": " <<endl;
			books[i].input();
		}
		cout << "---------------------------------------------------------------" << endl;
		cout << "Danh sach sach da nhap la: " << endl;
		for (i=0; i<n; i++) {
			cout << "Thong tin sach thu " << i+1 << " la: " << endl;
			books[i].display();
		}
		cout << "---------------------------------------------------------------" << endl;
		cout << "Danh sach sach xuat ban tu nam 2000 den 2003 la: " << endl;
		for (i=0; i<n; i++) {
			if (books[i].year <= 2003 && books[i].year >= 2000){
				books[i].display();
				cout << endl;
			}
		}
	}
}
