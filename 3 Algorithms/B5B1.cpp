#include <bits/stdc++.h>
using namespace std;
const long long A = 1e5+1;

bool snt(int a) {
	if (a<2) return false;
	for (int i = 2; i*i <= a; i++) {
		if (a%i == 0) return false;
	}
	return true;
}

int main (){
	int L, R, sum = 0, x=1;
	int a[100000];
	cin >> L >> R;
	for (int i = L; i <= R; i++) {
		if (snt(i)) {
			sum = sum + 1;
			a[x] = i;
			x++;
		}
	}
	cout << sum << '\n';
	for (int i = 1; i<= sum; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
