#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> antrian;
    int arr[4] = {1,1,2,3};

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
            int atas = antrian.front();
            cout<<atas<<endl;
            antrian.pop();
        }
    }
}