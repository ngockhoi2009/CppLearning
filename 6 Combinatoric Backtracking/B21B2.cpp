#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int a[100005];

int main() {
	string s; cin >> s;
	int gh = s.size();
	for (int i = 0; i < gh; i++) a[i] = s[i] - '0';
	sort(a, a + gh); 
	for (int i = gh - 1; i >= 0; i--) cout << a[i];
    return 0;
}
