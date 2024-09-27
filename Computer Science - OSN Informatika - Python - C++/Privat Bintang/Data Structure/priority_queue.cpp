#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> antrian;
    int arr[5] = {1,5,3,2,0};

    // Menampilkan data array
    for(auto x : arr){
        cout<<x<<endl;
        antrian.push(x);
    }
    cout<<endl;
    // Menampilkan data dengan stack
    while(1){
        if(antrian.empty()){
            break;
        }else{
            int atas = antrian.top();
            cout<<atas<<endl;
            antrian.pop();
        }
    }
}