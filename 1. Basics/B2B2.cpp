#include<bits/stdc++.h>
using namespace std;

int sodoixung(int a) {
	int sdx = 0;
	while (a>0) {
		int du = a%10;
		a = a/10;
		sdx = sdx*10;
		sdx = sdx + du;
	}
	return sdx;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int a;
	while (cin >>a) {
	if (sodoixung(a) == a) cout << "YES"<< '\n';
	else cout << "NO"<<'\n';}
	return 0;
}
