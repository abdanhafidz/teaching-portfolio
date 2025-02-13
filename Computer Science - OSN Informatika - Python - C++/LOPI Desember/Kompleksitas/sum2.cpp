#include <iostream>
using namespace std;
int sum(int n){
    if(n == 1){
        return 1;
    }else{
        return sum(n - 1) + n;
    }
}
int main(){
    int N;
    cin>>N;
    cout<<sum(N)<<endl;
    return 0;
}