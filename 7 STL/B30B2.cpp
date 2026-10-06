#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; cin >> n; queue<int>hang; queue<int>t; int bd = 1; 
	for (int i = 0; i < n; i++) {
		int temp; cin >> temp; hang.push(temp);
		t.push(bd); bd++;
	}
	int solan = 1;
	while (!hang.empty()) {
		int sl = hang.size();
		for (int i = 0; i < sl; i++) {
			int dau = hang.front(); int ttdau = t.front();
			if (dau <= solan) {
				cout << ttdau << " ";
				t.pop(); hang.pop();
			}
			else {
				hang.pop(); hang.push(dau-solan); t.pop(); t.push(ttdau);
			}
		}
		solan++;
	}
	return 0;
}
