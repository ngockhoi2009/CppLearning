#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	getline (cin, s);
	s = ' ' + s;
	int sochu = 0;
	for (int i = 0; i<s.length()-1; i++){
		if (s[i]==' '&&s[i+1]!=' '){
			sochu++;
		}
	}
	cout << sochu <<endl;
}


int main() {
	int T;
	cin >> T;
	cin.ignore();
	while(T--)
	solve();
    return 0;
}
