#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(getline(cin, s))
		if (s.substr(0,6)=="An say") cout << s.substr(7) << endl;
	return 0;
}
