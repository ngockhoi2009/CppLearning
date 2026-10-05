#include <bits/stdc++.h>
using namespace std;
const long long A = 1e6+1;

int uoc[A];
void uocntnn() {
	for (int i = 2; i*i <= A; i++) {
		if (uoc[i] == 0) {
			for (int j = i*i; j <= A; j+=i) {
				if (uoc[j] == 0) {
					uoc[j] = i;
				}
			}
		}
	}
	for (int i = 2; i <= A; i++) {
		if (uoc[i] == 0) {
			uoc[i] = i;
		}
	}
}

int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	uocntnn();
	int n;
	while (cin >> n) {
		cout << uoc[n] << '\n';
	}
	return 0;
}
