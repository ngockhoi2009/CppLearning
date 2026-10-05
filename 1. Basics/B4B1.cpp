#include<bits/stdc++.h>
using namespace std;

bool can(int w, int x, int y, int z) {
    for (int i = 0; i <= 1; ++i) {
        for (int j = 0; j <= 1; ++j) {
            for (int k = 0; k <= 1; ++k) {
                if (i*x + j*y + k*z==w) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, x, y, z;
        cin>>w>>x>>y>>z;
        if (can(w, x, y, z)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
