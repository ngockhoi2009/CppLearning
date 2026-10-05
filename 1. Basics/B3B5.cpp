#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long a[n];
	int tg = 0;
	for (int i =0; i<n; i++) {
		cin >> a[i];
	}
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			for (int k=j+1; k<n; k++) {
				if (a[j]<a[i]+a[k]&&a[i]<a[j]+a[k]&&a[k]<a[i]+a[j]) tg = tg + 1;
			}
		}
	}
	cout << tg;
	return 0;
}
