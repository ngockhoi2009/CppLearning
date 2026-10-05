#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;


int cachto(int n, int mau) {
	if (n==0) return 1;
	int tong = 0;
	for (int i = 1; i <= 3; i++) {
		if(i!=mau) {
			tong = (tong + cachto(n-1, i))%M;
		}
	}
	return tong;
}

int main() {
	int n;
    cin >> n;
    cout << cachto(n, 0) << " ";
    return 0;
}
