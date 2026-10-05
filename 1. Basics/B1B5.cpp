#include <bits/stdc++.h>
using namespace std;

int main (){
	long long a, b, c;
	cin >> a >> b >> c;
	if (a+b==c){
		cout << "YES";
	}
	else if (a+c==b){
		cout << "YES";
	}
	else if (b+c==a){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
