#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll N;
    cin>>N;
    string S;
    cin>>S;
    ll count = 0;
    for(int i = 0 ; i<S.size(); i++){
        char curO = S[i];
        if(curO == 'O'){
            for(int j = i + 1; j<S.size(); j++){
                char curS = S[j];
                if(curS == 'S'){
                    for(int k = j + 1; k<S.size(); k++){
                        char curN = S[k];
                        if(curN == 'N'){
                            count++;
                        }
                    }
                }
            }
        }
    }
    cout<<count<<endl;
}