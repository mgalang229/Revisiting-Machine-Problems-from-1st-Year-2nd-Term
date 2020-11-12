#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	string tmp, s;
	cout << "Enter a word: ";
	getline(cin, tmp);
	for(char c : tmp)
		if(c!=' ')
			s+=c;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	bool ok=1;
	for(int i=0; i<(int)s.size(); ++i)
		if(s[i]!=s[(int)s.size()-1-i])
			ok=0;
	if(ok)
		cout << tmp << " is a palindrome";
	else
		cout << tmp << " is not a palindrome";
	cout << "\n";
}
