#include <bits/stdc++.h>
using namespace std;

void doicho(string &n) {
	long long l = 0, r = n.length()-1;
	while (l < r) {
		char temp = n[l];
		n[l] = n[r];
		n[r] = temp;
		l++; r--;
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string n; string kq;
	cin >> n; int nho = 0;
	for (int i = n.length()-1; i >= 0; i--) {
		int x = n[i]-'0';
		int temp = x*2 + nho;
		int so = temp%10 + '0';
		kq+= so;
		nho = temp/10;
	}	
	if (nho != 0) kq += (nho+'0');
	doicho(kq);
	cout << kq;
	return 0;
}
