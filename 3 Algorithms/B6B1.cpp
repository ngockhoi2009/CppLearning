#include<bits/stdc++.h>
using namespace std;

int main() {
	long long M, a = 1;
	cin >> M;
	long long sum = 0;
	long long i = 0;
	while (sum + i + 1 <= M) {
		i++;
		sum = sum + i;	
		}
	cout << i;	
    return 0;
}
