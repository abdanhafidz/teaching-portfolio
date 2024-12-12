#include <bits/stdc++.h>
using namespace std;
vector <int> arr;

int dp(int n){
    if(n == 0) return 1;
    int ret = 1;
    for(int i = 0; i<n; i++){
        if(arr[n] > arr[i]){
            ret = max(ret, dp(i) + 1);
        }
    }
    return ret;
}

int lis(){
    int n = arr.size();
    int res = 1;
    for (int i = 1; i < n; i++)
        res = max(res, dp(i));
    return res;
}

int main(){
    int N;
    cin>>N;
    while(N--){
        int val;
        cin>>val;
        arr.push_back(val);
    }

    cout<<lis()<<endl;
    return 0;
}