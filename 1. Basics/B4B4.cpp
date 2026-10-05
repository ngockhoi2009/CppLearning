#include <bits/stdc++.h>
using namespace std;

const long long M = 2e5+1;

int main(){
	int n, q;
	cin >> n >> q;
    int a[n]; 
    int b[q];    
    bool use[M] = {false}; 
    int mex[M];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i]<M) use[a[i]] = true;
    }
    for(int i=0; i<q; i++) {
        cin >> b[i];
    }
    int k = 0;
    for (int i=0; i<M; i++) {
        if (!use[i]) {
            mex[k] = i;
            k++;
        }
    }
    for (int i=0; i<q; i++) {
        cout << mex[b[i]-1] << "\n"; 
    }
	return 0;
}
