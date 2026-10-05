#include <bits/stdc++.h>
using namespace std;

int main (){
	long long n, m, x;
	cin >> n >> m >> x;
	long long i = m/n;
	if (m+x<n) {
		cout << x + m;
	}
	else {
		cout << (x+m)%n;
	}
	return 0;
}
