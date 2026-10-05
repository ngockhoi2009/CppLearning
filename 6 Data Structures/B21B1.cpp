#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long a, b, k; cin >> a >> b >> k;
    cout << a/b << ".";  
    a = a%b;  
    for (int i = 0; i < k; i++) {
        a = a*10;
        cout << a/b;
        a = a%b;
    }
    return 0;
}
