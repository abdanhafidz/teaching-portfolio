#include <iostream>
using namespace std;


int main(){
    long long N;
    cin>>N;
    // N = 1
    long count = 1;
    while( ((N & (N + 1)) != 0 )){
        N++;
        count++;
    }
    cout<<count<<endl;
}