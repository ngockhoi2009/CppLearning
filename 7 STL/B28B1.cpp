#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
    vector<long long>a;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
    	char x; cin >> x; long long k; cin >> k;
    	if (x == 'A') a.push_back(k);
    	if (x == 'D') {	
    		if (k <= a.size()) a.erase(a.begin()+k-1);	
		}
    	if (x == 'Q') {
    		if (k > a.size()) cout << -1 << '\n';
    		else cout << a.at(k-1) << '\n';
    	}
	}
	return 0;
}
