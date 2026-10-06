#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string s; cin >> s; stack<long long>so;
	for (int i = 0; i < s.size(); i++) {
		if (!(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')) so.push(s[i]-'0');
		else {
			long long a = so.top(); so.pop(); long long b = so.top(); so.pop();
			if (s[i]=='+') so.push(a+b);
			if (s[i]=='-') so.push(b-a);
			if (s[i]=='*') so.push(a*b);
			if (s[i]=='/') so.push(b/a);
		}
	}
	cout << so.top();
    return 0;
}
