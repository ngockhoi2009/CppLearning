#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    if (n>=1 && n<=3) {
        cout << "XUAN";
    }
    else if (n>=4 && n<=6) {
        cout << "HA";
    }
    else if (n>=7 && n<=9) {
        cout << "THU";
    }
    else {
        cout << "DONG";
    }
    return 0;
}
