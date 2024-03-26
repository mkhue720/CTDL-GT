#include<bits/stdc++.h>
using namespace std;
class Tivi{
	public:
		string ma, hangsx, ten;
		int gia, soluong;
		Tivi(){
			ma = hangsx = ten = "";
			gia = soluong = 0;
		}
		Tivi(string a, string b, string c, int m, int n){
			ma = a; hangsx = b; ten = c; gia = m; soluong = n;
		}
		friend ostream& operator<<(ostream &os, Tivi T){
			os<<"Ma :"<<T.ma<<"\nHang san xuat: "<<T.hangsx<<"\nHo va ten: "<<T.ten<<"\nGia: "<<T.gia<<"\nSo luong: "<<T.soluong<<"\n";
			return os;
		}
		friend istream& operator>>(istream &is, Tivi &T){
			cout <<"Nhap ma: ";
			getline(is, T.ma);
			cout <<"Nhap hang san xuat: ";
			getline(is, T.hangsx);
			cout <<"Nhap ho va ten: ";
			getline(is, T.ten);
			cout<<"Nhap gia: ";
			is >> T.gia;
			cout<<"Nhap so luong: ";
			is >>T.soluong;
			return is;
		}
};

class TiviManager {
private:
    vector<Tivi> danhSachTivi;

public:
    void themTivi(const Tivi& tivi) {
        danhSachTivi.push_back(tivi);
    }

    void xoaTivi(const string& ma) {
        danhSachTivi.erase(remove_if(danhSachTivi.begin(), danhSachTivi.end(), [&](const Tivi& tivi) {
            return tivi.ma == ma;
        }), danhSachTivi.end());
    }

    int tongGiaTriTheoHangSX(const string& hangsx) {
        int total = 0;
        for (const Tivi& tivi : danhSachTivi) {
            if (tivi.hangsx == hangsx) {
                total += tivi.gia * tivi.soluong;
            }
        }
        return total;
    }

    void inDanhSachTivi() {
        for (const Tivi& tivi : danhSachTivi) {
            cout << tivi << endl;
        }
    }
};

int main() {
    TiviManager manager;
    int choice;
    while (true) {
        cout << "1. Them Ti Vi" << endl;
        cout << "2. Xoa Ti Vi theo ma" << endl;
        cout << "3. Tong gia tri hang hoa ton kho theo 1 hang san xuat" << endl;
        cout << "4. In danh sach" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                Tivi tmp;
                cin >> tmp;
                manager.themTivi(tmp);
                break;
            }
            case 2: {
                string tmp;
                cout << "Nhap ma can xoa: ";
                cin >> tmp;
                manager.xoaTivi(tmp);
                break;
            }
            case 3: {
                string tmp;
                cout << "Nhap hang can tinh: ";
                getline(cin, tmp);
                cout << "Tong gia tri: " << manager.tongGiaTriTheoHangSX(tmp) << endl;
                break;
            }
            case 4:
                manager.inDanhSachTivi();
                break;
            case 5:
                cout << "Exiting program" << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}