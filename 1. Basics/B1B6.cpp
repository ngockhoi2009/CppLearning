#include <bits/stdc++.h>
using namespace std;

int main (){
	int a, b;
	cin >> a >> b;
	if (a==b) {
		cout << 0;
	}
	else if (a>b) {
		if ((a-b)%2==0) cout << 1;
		else cout << 2;
	}
	else if (a<b) {
		if ((b-a)%2!=0) cout << 1;
		else cout << 2;
	}
	return 0;
}
