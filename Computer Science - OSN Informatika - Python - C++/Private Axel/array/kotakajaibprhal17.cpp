#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int a[N];
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	int x, y;
	cin>>x>>y;
	cout<<a[y]+a[x]<<endl;
	return 0;
}