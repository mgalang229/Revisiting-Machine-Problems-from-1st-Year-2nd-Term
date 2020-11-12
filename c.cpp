#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(int n) {
	if(n!=0) {
		solve(n/2);
		if(n%2==0)
			cout << 0;
		else
			cout << 1;
	}	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	solve(n);
	cout << "\n";
}
