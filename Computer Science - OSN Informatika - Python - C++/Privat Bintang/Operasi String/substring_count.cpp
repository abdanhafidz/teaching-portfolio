#include <iostream>
#include <string>
using namespace std;

int count_substring(string S, string M, int l = 0, int r = 0){
    int idx = S.find(M,l);
    if(idx != -1){
        return 1 + count_substring(S,M,idx + M.size() - 1);
    }else{
        return 0;
    }
}

int main(){
    string S, M;
    cin>>S>>M;
    cout<<count_substring(S,M);
    return 0;
}