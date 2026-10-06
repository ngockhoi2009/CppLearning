#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string s; cin >> s; // [()]{}
	stack<char>dau;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '{' || s[i] == '[' || s[i] == '(') dau.push(s[i]);
		else {
			if (dau.empty()) {
				cout << "NO";
				return 0;
			}
			if ((dau.top()=='(' and s[i]==')') || (dau.top()=='[' and s[i]==']') || (dau.top()=='{' and s[i]=='}')) dau.pop();
			else {
				cout << "NO";
				return 0;
			}
		}
	}
	if (dau.empty()) cout << "YES";
	else cout << "NO"; 
	return 0;
}
