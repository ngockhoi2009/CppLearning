#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e7+9;
string lowercase(string a) {
	for (int i = 0; i<a.length(); i++) {
		if (a[i]>='A'&&a[i]<='Z') a[i] = a[i] + 32;
	}
	return a;
}

int main(){
	string an, nam;
	cin >> an >> nam;
	an = lowercase (an);
	nam = lowercase (nam);
	if (an==nam) cout<< "Hoa";
	else if ((an!="keo"&&an!="bua"&&an!="bao")||(nam!="keo"&&nam!="bua"&&nam!="bao")) cout << "Khong";
	else if (an=="keo" && nam=="bao") cout << "An";
	else if (an=="bua" && nam=="keo") cout << "An";
	else if (an=="bao" && nam=="bua") cout << "An";	
	else if (nam=="keo" && an=="bao") cout << "Nam";
	else if (nam=="bua" && an=="keo") cout << "Nam";
	else if (nam=="bao" && an=="bua") cout << "Nam";	
	return 0;
}
