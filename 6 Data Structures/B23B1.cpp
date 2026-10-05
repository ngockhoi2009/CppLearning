#include <bits/stdc++.h>
using namespace std;

//Hoan vi de quy
void in(int a[], int n) {
	for (int i = 1;i <= n; i++) cout << a[i] << ' ';
	cout << '\n';
}
void hoanvi(int a[], int n, bool T[], int i, int k) {
	if (i > k) in(a, k);
	else {
		for (int t = 1; t <= n; t++) {
			if (!T[t]) {
				T[t] = true;
				a[i] = t;
				hoanvi(a, n, T, i+1, k);
				T[t] = false;
			}
			
		}
	}
}
 
int main() {   
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k; int a[n+1]; bool T[n+1];
	for (int i = 1; i <= n; i++) {
		a[i] = i;
		T[i] = false;
	}
	hoanvi(a, n, T, 1, k);
}
