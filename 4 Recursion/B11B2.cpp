#include <bits/stdc++.h>
using namespace std;
const int M = 1001;
long long a[M];

void mahoa(string& s, int l, int r, string& ans) {
	ans = ans + s[l];
	if (l > r) return mahoa(s, r, l-1, ans);
	else if (l < r) return mahoa(s, r, l+1, ans);
}

int main (){
	string s;
	string ans;
	cin >> s;
	mahoa(s, 0, s.length()-1, ans);
	cout << ans;
	return 0;
}
