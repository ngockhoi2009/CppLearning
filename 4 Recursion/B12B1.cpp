#include <bits/stdc++.h>
using namespace std;
 
void tangchuoi(string& s, int k, int L) {
	if (L == s.size()) return;
	s[L] = ((s[L] - 'a' + k)%26) + 'a';
	return tangchuoi(s, k, L + 1);
}

string daonguoc(string& s, int L, int R) {
	while (L < R) {
		char temp = s[L];
		s[L] = s[R];
		s[R] = temp;
		L++; R--;
	}
	return s;
}

int main (){
	string s;
	int k;
	cin >> s >> k;
	tangchuoi(s, k, 0);
	cout << daonguoc(s, 0, s.size()-1);
	return 0;
}
