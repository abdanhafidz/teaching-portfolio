#include <iostream>
using namespace std;
string S1, S2;

int lcs(int m, int n){
    if(m < 0  || n < 0) return 0;
    if(S1[m] == S2[n]){
        return 1 + lcs(m - 1, n - 1);
    }else{
        return max(lcs(m - 1, n), lcs(m, n - 1));
    }
}

int main(){
    cin>>S1;
    cin>>S2;
    cout<<lcs(S1.size() - 1, S2.size() - 1);
    return 0;
}