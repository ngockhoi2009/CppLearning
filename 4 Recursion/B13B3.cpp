#include <bits/stdc++.h>
using namespace std;
const int M = 1e6;

int a[M];
int cnt = 0;
void mangso(string s, int i, int x) {
	if (i >= s.size()) {
		return;
	}
	if (s[i]=='+' || s[i] == '-') return mangso(s, i+1, x);
	int so = 0;
	while (i<s.size() && s[i]>='0'&& s[i]<='9') {
		so = so*10 + (s[i] - '0');
		i++;
	}
	a[x] = so;
	cnt = x+1;
	return mangso(s, i+1, x+1);
}

int b[M];
void mangdau(string s, int i, int x) {
	if (i >= s.size()) return;
	else {
		if (s[i] == '+') {
			b[x] = 0;
			return mangdau(s, i+1, x+1);
		}
		else if (s[i] == '-') {
			b[x] = 1;
			return mangdau(s, i+1, x+1);
		}
		else return mangdau(s, i+1, x);
	}	
}
 
int main (){
	long long res = 0;
	string s;
	cin >> s;
	if (s[0]!='+' && s[0]!='-') {
		s = '+' + s;
	}
	mangso(s, 0, 0);
	mangdau(s, 0, 0);
	for (int i = 0; i < cnt; i++) {
		if (b[i] == 0) res = res + a[i];
		else if (b[i] == 1) res = res - a[i];
	}
	cout << res;
	return 0;
}
