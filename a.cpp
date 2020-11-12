#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	int a[10];
	cout << "Enter ten numbers: \n";
	for(int i=0; i<10; ++i)
		cin >> a[i];
	int mx1=*max_element(a, a+10);
	int mx2=0;
	bool ok=0;
	for(int i=0; i<10; ++i)
		if(a[i]!=mx1) {
			mx2=max(mx2, a[i]);
			ok=1;
		}
	if(!ok)
		mx2=mx1;
	cout << "first to the highest: " << mx1 << "\n";
	cout << "second to the highest: " << mx2 << "\n";
	int mn1=*min_element(a, a+10);
	int mn2=INT_MAX;
	ok=0;
	for(int i=0; i<10; ++i)
		if(a[i]!=mn1) {
			mn2=min(mn2, a[i]);
			ok=1;
		}
	if(!ok)
		mn2=mn1;
	cout << "first to the lowest: " << mn1 << "\n";
	cout << "second to the lowest: " << mn2 << "\n";
}
