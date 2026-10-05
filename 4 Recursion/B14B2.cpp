#include <bits/stdc++.h>
using namespace std;

#define nln '\n'
typedef long long ll;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, m, q; cin >> n >> m >> q;

    ll a[n];
    for (auto &v : a)
        cin >> v;

    ll b[m];
    for (auto &v : b)
        cin >> v;

    bool chk[m];
    memset(chk, 0, sizeof chk);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (b[i] % a[j] == 0) {
                chk[i] = true;
                break;
            }
        }
    }

    ll pfs[m + 1];
    pfs[0] = 0;
    for (int i = 0; i < m; ++i)
        pfs[i + 1] = pfs[i] + chk[i];

    while (q--) {
        ll l, r; cin >> l >> r;
        cout << pfs[r] - pfs[l - 1] << nln;
    }
}
