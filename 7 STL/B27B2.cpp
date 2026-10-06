#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n; int xhnn = 0; int gtln = 0;
	vector<int>v(100001, 0);
	for(int i = 1; i <= n; i++) {
		int temp; cin >> temp; v[temp]++;
		if (v[temp] > xhnn) xhnn = v[temp];
		if (temp > gtln) gtln = temp;
	}
	vector<int>a(n+1);
	int t = 1;
	for (int i = xhnn; i > 0; i--) {
		for (int j = 1; j <= gtln; j++) {
			if (v[j] == i) {
				a[t] = j;
				t++;
			}
		}
	}
	for (int i = 1; i < t; i++) cout << a[i] << " ";
    return 0;
}
