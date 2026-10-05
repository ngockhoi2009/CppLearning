#include <bits/stdc++.h>
using namespace std;

bool mangdx (int a[], int n) {
	int l = 0;
	int r = n-1;
	while (l<r) {
		if (a[l]!=a[r]) return false;
		l++;
		r--;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	if (mangdx(a, n)) cout << "YES";
	else cout << "NO";
	return 0;
}
