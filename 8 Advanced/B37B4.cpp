#include <bits/stdc++.h>
using namespace std;

void doi(vector<char> & v,int a, int b) {
	int c = v[a];
	v[a] = v[b];
	v[b] = c;
}

//So sanh (A va B) A >= B: true -- A < B: false
bool sosanh(string& s, string& t) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'p' && t[i] == 'd') return false;
		if (s[i] == 'd' && t[i] == 'p') return true;
	}
	return true;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  	string s; cin >> s; string bd = s; string ans = bd;
  	for (int i = 0; i < s.length() - 1; i++) {
  		if (s[i] == 'p') {
  			for (int j = i; j < s.length(); j++) {
  				if (s[j] == 'd') continue;
  				else {
  					vector<char> v(s.begin(), s.end());
  					int l = i, r = j;
  					while (l < r) {
  						if (v[l] == 'p') v[l] = 'd'; else v[l] = 'p';
  						if (v[r] == 'p') v[r] = 'd'; else v[r] = 'p';
  						doi(v, l, r);
  						l++; r--;
					}
					if (l == r) {
						if (v[l] == 'p') v[l] = 'd'; else v[l] = 'p';
					}
  				    string t(v.begin(), v.end());
  					if (sosanh(t, ans)) ans = t;
				}
			}
			cout << ans;
			return 0;
		}
	}
	cout << ans;
  	return 0;
}
