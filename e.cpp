#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void sub(int a[], int n) {
	cout << "Array Subscript Notation\n";
	for(int i=0; i<n; ++i)
		cout << "a[" << i << "] = " << a[i] << "\n";
}

void name(int a[], int n) {
	cout << "\nPointer/offset notation where\n"
		 << "the pointer is the array name\n";
	for(int i=0; i<n; ++i)
		cout << "*(a+ " << i << ") = " << *(a+i) << "\n";
}

void subN(int Ptr[], int n) {
	cout << "\nPointer subscript notation\n";
	for(int i=0; i<n; ++i)
		cout << "Ptr[" << i << "] = " << Ptr[i] << "\n";
}

void offset(int Ptr[], int n) {
	cout << "\nPointer/offset notation\n";
	for(int i=0; i<n; ++i)
		cout << "*(Ptr+ " << i << ") = " << *(Ptr+i) << "\n";
}

int main() {
	int a[]={8,3,6,2};
	int *ptr=a;
	sub(a, 4);
	name(a, 4);
	subN(ptr, 4);
	offset(ptr, 4);
}
