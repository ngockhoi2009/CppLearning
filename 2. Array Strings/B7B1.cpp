#include<bits/stdc++.h>
using namespace std;

const int M = 1e6+1;
int a[M], prefix[M];
void khoitao(int n) {
	for (int i = 1; i <= n; i++) {
		prefix[i] = prefix[i-1] + a[i];
	}
}
int tong(int L, int R) {
	return prefix[R] - prefix[L-1];
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];	
	}
	khoitao(n);
	for (int i = 1; i < n; i++) {
		if (tong(1, i) == tong(i + 1, n)) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
    return 0;
}
