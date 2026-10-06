#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string s; map<string, int> tu;
	while (cin >> s) tu[s]++;
	for (map<string, int>::iterator it = tu.begin(); it != tu.end(); it++) cout << it->first << " " << it -> second << '\n';
	return 0;
}
