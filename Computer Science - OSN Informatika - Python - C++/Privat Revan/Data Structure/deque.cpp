#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> antrian = {};
    int arr[5] = {1,5,3,2,0};

    // Menampilkan data array
    for(auto x : arr){
        cout<<x<<endl;
        if(x%2 == 0){
            antrian.push_back(x);
        }else{
            antrian.push_front(x);
        }
        
    }
    cout<<endl;
    // Menampilkan data dengan stack
    while(1){
        if(antrian.empty()){
            break;
        }else{
            int atas = antrian.front();
            cout<<atas<<endl;
            antrian.pop_front();
        }
    }
antrian = {1,2,3,4,5};

antrian.insert(antrian.begin() + 2, 10); // 1  2 10 3 4 5 
 
 cout << "Deque contains:"<<endl;
 for (auto it = antrian.begin(); it != antrian.end(); ++it) {
        cout << ' ' << *it; 
        cout << '\n'; 
 }
}