#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+1];
	int sobigoi[100001];
	for (int i=1; i<=n; i++) {
		sobigoi[i]=0;
	}
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	for (int i=1; i<=n; i++) {
		if (sobigoi[i] == 0) sobigoi[a[i]]= 1;
	}
	for (int i=1; i<=n; i++) {
		if (sobigoi[i] == 0) cout << i << " ";
	}
	return 0;
}
