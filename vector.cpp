#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main() {
	vector<int> myvector;
	int myint;
	
	cout << "Please enter some integers (enter 0 to end): " << endl;
	do {
		cin >> myint;
		myvector.push_back(myint);
	}
	while (myint);
	cout << "myvector stores " << int(myvector.size()) <<" number." <<endl;
	return 0;
}
