#include <bits/stdc++.h>
using namespace std;

 
int main() {   
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; cin >> n; 
	vector<int>chan, le;
	for (int i = 0; i < n; i++) {
		int temp; cin >> temp;
		if (temp%2 == 0) chan.push_back(temp);
		else le.push_back(temp);
	}
	long long res = -1;
	if (chan.size() >= 2) {
		sort(chan.begin(), chan.end());
		res = chan[chan.size()-1] + chan[chan.size()-2]; 
	}
	if (le.size() >= 2) {
		sort(le.begin(), le.end());
		long long kq = le[le.size()-1] + le[le.size()-2];
		res = max(res, kq); 
	}
	cout << res;
	
	return 0;
}
