#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin>>n >> q;
    unordered_map<int, int> m;
    for (int i=1;i<=n;i++){
        int ma_mau;
        cin >> ma_mau;
        if (m[ma_mau] == 0) m[ma_mau] = i;
    }
    while (q--){
        int ma_mau; cin >> ma_mau; cout << m[ma_mau] <<'\n';
        for (unordered_map<int, int>::iterator it=m.begin(); it!=m.end(); it++){
            if (it->second < m[ma_mau]) it->second++;
        }
        m[ma_mau] = 1;
    }
    return 0;
}
