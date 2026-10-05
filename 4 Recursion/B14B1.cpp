#include <bits/stdc++.h>
using namespace std;
const int M = 1e5;

int a[200] = {0};
string lowercase(string& s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
	}
	return s;
}

void solanxh(string& s, int i) {
	if (i >= s.size()) return;
	else {
		a[(int)s[i]]++;
		return solanxh(s, i+1);
	}
}

int gtmax = 0;
void timmax(int a[], int i, int R) {
	if (i > R) return;
	if (i < R && a[i] > gtmax) {
		gtmax = a[i];
		return timmax(a, i+1, R);
	}
	return timmax(a, i+1, R);
}

int main() {
	string s;
	cin >> s;
	s = lowercase(s);
	solanxh(s, 0);
	timmax(a, 97, 122);
	cout << gtmax;
    return 0;
}
