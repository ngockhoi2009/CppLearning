#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x;
	cin >> x;
	long long sum=0;
	sum = sum + x/10;
	x = x%10;
	sum = sum + x/5;
	x = x%5;
	sum = sum + x/2;
	x = x%2;
	sum = sum + x/1;
	x = x%1;
	cout << sum;
	return 0;
}
