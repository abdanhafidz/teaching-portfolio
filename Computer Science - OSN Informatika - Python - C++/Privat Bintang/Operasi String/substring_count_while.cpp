#include <iostream>
#include <string>
using namespace std;

int main(){
    string S, M;
    cin>>S>>M;
    int L = M.size();
    int left = 0, count = 0;
    while(S.find(M,left) != -1){
        int idx = S.find(M,left);
        left = L + idx - 1;
        count++;
    }
    cout<<count<<endl;
    return 0;
}

