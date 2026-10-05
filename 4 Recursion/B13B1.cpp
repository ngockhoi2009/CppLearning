#include <bits/stdc++.h>
using namespace std;

long long tohop(int n, int k) {
	if (k==0 || n==k) return 1;
	return tohop(n-1, k) + tohop(n-1, k-1);
}

int main (){
	int n, k;
	cin >> n >> k;
	cout << tohop(n, k);
	return 0;
}
