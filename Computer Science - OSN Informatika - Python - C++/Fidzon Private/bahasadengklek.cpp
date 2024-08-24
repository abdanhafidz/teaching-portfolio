#include <bits/stdc++.h>
using namespace std;


int main(){
    // operasi string
    string S;
    cin>>S;
    for(int i = 0; i<S.size(); i++){
        char cur = S[i];
        if(islower(cur)){
            S[i] = toupper(cur);
        }else{
            S[i] = tolower(cur);
        }
    }
    cout<<S<<endl;

}