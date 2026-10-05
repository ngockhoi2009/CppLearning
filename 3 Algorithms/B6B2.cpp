#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, solan = 0;
	cin >> n;
	int a[n+1], x[n+1], y[n+1];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++) {
		int gtmin = a[i], id = i;
		int j;
		for (int j = i+1; j < n; j++) {
			if (a[j] < gtmin) {
				gtmin = a[j];
				id = j;
			}
		}
		if (id != i) {
		int tg = a[i];
		a[i] = a[id];
		a[id] = tg;
		x[solan] = i+1;
		y[solan] = id+1;
		solan++;
		}
	}
	cout << solan << '\n';
	for (int i = 0; i < solan; i++) cout << x[i] << " " << y[i]	<< '\n';
	return 0;
}
