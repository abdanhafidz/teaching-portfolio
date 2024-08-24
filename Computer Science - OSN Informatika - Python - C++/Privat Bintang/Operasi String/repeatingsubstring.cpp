#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin>>S;
    string ans, temp;
    char cur = S[0];
    temp = "";
    ans = "";
    for(int i = 1; i<S.size(); i++){
        // cout<<cur<<endl;
        char c = S[i];
        // cout<<c<<endl;
        if(cur ==  c){
            temp += cur;
        }else{
            ans = max(ans, temp);
            temp = "";
            cur = S[i];
        }
        // cout<<temp<<endl;
    }
    cout<<ans<<endl;
    
}