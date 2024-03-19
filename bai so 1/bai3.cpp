	#include <iostream>
	#include <cmath>
	using namespace std;
	int main () {
		int n, a, i, j, d1, d2;
		cout << "Nhap so diem: ";
		cin >> n;
		if (n <= 0) {
	    	cout << "So diem phai lon hon 0." << endl;
	    } else {
	    int hoanh[n];
		int tung[n];
		float max, d;
		float min = sqrt(pow(hoanh[0] - hoanh[1], 2) + pow(tung[0] - tung[1], 2));

		for (i=0; i<n; i++) {
			cout << endl << "nhap hoanh do thu " << i+1 << ": ";
			cin >> hoanh[i];
			cout << endl << "nhap tung do thu " << i+1 << ": ";
			cin >> tung[i];
		}
		for (i=0; i<n; i++) {
			cout << endl << " diem thu " << i+1 << " la: (" << hoanh[i] << ", " << tung[i] << ")";
		}
		max = sqrt(pow(hoanh[0], 2)+pow(tung[0], 2));
		a=0;
		for (i=1; i<n; i++) {
			if (sqrt(pow(hoanh[i], 2)+pow(tung[i], 2)) > max) {
				max = sqrt(pow(hoanh[i], 2)+pow(tung[i], 2));
				a=i;
			}
		}
		cout << endl << "Diem xa goc toa do nhat la: (" << hoanh[a] << "," << tung[a] << ")" <<endl;
		//phan b
		for (i=0; i<n; i++) {
			for (j=i+1; j<n; j++) {
				d=sqrt(pow(hoanh[i] - hoanh[j], 2) + pow(tung[i] - tung[j], 2));
				if (d<min) {
					min = d;
					d1=i;
					d2=j;
				}
			}
		}
		cout << "Toa do 2 diem gan nhau la: " << endl;
		cout << "Diem 1: (" << hoanh[d1] << "," << tung[d1] << ")" << endl;
		cout << "Diem 2: (" << hoanh[d2] << "," << tung[d2] << ")" << endl;
		// phan c
	    int minX = hoanh[0];
	    int minY = tung[0];
	    int maxX = hoanh[0];
	    int maxY = tung[0];
		for (i = 1; i < n; i++) {
            if (hoanh[i] < minX) {
                minX = hoanh[i];
            }
            if (hoanh[i] > maxX) {
                maxX = hoanh[i];
            }
            if (tung[i] < minY) {
                minY = tung[i];
            }
            if (tung[i] > maxY) {
                maxY = tung[i];
            }
        }

        cout << "Toa do cua hinh chu nhat nho nhat la: " << endl;
        cout << "Goc tren ben trai: (" << minX << ", " << maxY << ")" << endl;
        cout << "Goc duoi ben phai: (" << maxX << ", " << minY << ")" << endl;
	}
	}
