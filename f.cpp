#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int fib(int a, int b, int c) {
	if(c==1)
		return a;
	else if(c==2)
		return b;
	return fib(a, b, c-1)+fib(a, b, c-2);
}

int main() {
	int a, b, c;
	cout << "Enter the first Fibonacci number: ";
	cin >> a;
	cout << "Enter the second Fibonacci number: ";
	cin >> b;
	cout << "Enter the position of the desired Fibonacci number: ";
	cin >> c;
	cout << "The Fibonacci number at position " << c << " is: " << fib(a, b, c);
	cout << "\n";
}
