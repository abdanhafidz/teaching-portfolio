#include<bits/stdc++.h>
using namespace std;

int main() {
	int Q, N, X, Y;
	stack <int> tumpuk;
	cin >> Q >> N;
	for(int i=0;i<Q;i++) {
		cin >> X >> Y;
		if(X==Y) {
			tumpuk.push(X);
		}
		else if(X>Y) {
			tumpuk.push(X);
			tumpuk.push(Y);
		}
		else if(Y>X) {
			tumpuk.push(Y);
			tumpuk.push(X);
		}
	}
	for(int j=0;j<N;j++) {
		int hasil= tumpuk.top();
		cout << hasil << endl;
		tumpuk.pop();
	}
	return 0;
}