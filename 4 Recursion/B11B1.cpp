#include <bits/stdc++.h>
using namespace std;
const int M = 1001;

int f(int n) {
	if (n == 0) return 1;
	else if (n == 1) return 2;
	else if (n == 2) return 3;
	return 2*f(n-1) + 3*f(n-2) + f(n-3);
}
int main (){
	int n;
	cin >> n;
	cout << f(n);
	return 0;
}
