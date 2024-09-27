#include <iostream>
using namespace std;

int main(){
	int N;
	int r;
	int c;
	cin>>N>>r>>c;
	int kursi[r][c];
	int hitung_siswa[r];
	for(int i=0; i<4; i++){
		int x, a, b;
		cin>>x>>a>>b;
		kursi[a-1][b-1]=x;
		hitung_siswa[a-1]+=1;
	}
	for(auto hitung_orang : hitung_siswa){
		cout<<hitung_orang<<endl;
	}
	
	return 0;
}