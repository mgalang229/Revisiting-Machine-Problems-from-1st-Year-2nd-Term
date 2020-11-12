#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void read(int **a, int r, int c) {
	for(int i=0; i<r; ++i) {
		cout << "Enter " << c << " number(s) for row number " << i << ": ";
		for(int j=0; j<c; ++j)
			cin >> a[i][j];
	}
}

void print(int **a, int r, int c) {
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j)
			cout << setw(5) << a[i][j];
		cout << "\n";
	}
}

int main() {
	cout << "Enter your rows and columns: ";
	int r, c;
	cin >> r >> c;
	int **a;
	a = new int*[5];
	for(int i=0; i<r; ++i)
		a[i] = new int[c];
	read(a, r, c);
	cout << "Two dimensional board: \n";
	print(a, r, c);
}
