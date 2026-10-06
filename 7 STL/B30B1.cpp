#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; cin >> n; 
	stack<int>so; stack<int>v;
	int vtri = 1; 
	for (int i = 0; i < n; i++) {
		bool stop = false;
		int temp; cin >> temp;
		while (!so.empty()) {
			if (temp < so.top()) {
				cout << v.top() << " ";
				so.push(temp);
				v.push(vtri);
				vtri++;
				stop = true;
				break;
			}
			else {
				so.pop(); v.pop();
			}
		}
		if (stop) continue;
		cout << "-1" << " ";
		so.push(temp);
		v.push(vtri);
		vtri++;
	}
	return 0;
}
