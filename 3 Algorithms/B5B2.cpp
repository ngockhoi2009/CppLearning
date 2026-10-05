#include <bits/stdc++.h>
using namespace std;

int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	long long x, m = 0, so = 0;
	long long a[100001];
	cin >> x;
	for (long long i = 1; i*i <= x; i++) {
		if (x%i == 0) {
			a[so++] = i;
			if (i != x/i) a[so++] = x/i;
		}
	}
	sort(a, a + so);
	for (int i = 0; i<so; i++) {
		cout << a[i] << " ";
	}
}
