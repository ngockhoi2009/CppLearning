#include <bits/stdc++.h>
using namespace std;
const int M = 1e4+1;

int a[M];
int dp[M];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int res = 0;
    for (int i = 0; i < n; i++) {
        dp[i] = 1; 
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) dp[i] = max(dp[i], dp[j] + 1);
        }
        res = max(res, dp[i]);
    }

    cout << res;
    return 0;
}
