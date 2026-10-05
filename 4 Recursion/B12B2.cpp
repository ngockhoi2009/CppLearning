#include <bits/stdc++.h>
using namespace std;

int dem = 0;
void thaphn1(int n, char cot1, char cot3, char cot2) {
	if (n == 1) {
		dem++;
	}
	else {
		thaphn1(n-1, cot1, cot2, cot3) ;
		dem++;
		thaphn1(n-1, cot2, cot3, cot1);
	}
}

void thaphn2(int n, char cot1, char cot3, char cot2) {
	if (n == 1) {
		cout << cot1 << " " << cot3 << endl;
	}
	else {
		thaphn2(n-1, cot1, cot2, cot3) ;
		cout << cot1 << " " << cot3 << endl;
		thaphn2(n-1, cot2, cot3, cot1);
	}
}

int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	thaphn1(n, 'A', 'C', 'B');
	cout << dem << '\n';
	thaphn2(n, 'A', 'C', 'B');
	return 0;
}
