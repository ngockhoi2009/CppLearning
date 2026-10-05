#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	long long m;
	cin >> n >> m;
	int a[n+1];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	long long res = 0;
	for (int i=0; i<n; i++) {
		long long res1 = abs(a[i] - 1);
		long long res2 = abs(m - a[i]);
		res = res + max(res1, res2);
	}
	cout << res;
	return 0;
}
