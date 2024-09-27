#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1,4,4,10,27,3,4,5,6,1};
    cout<<"Array sebelum terurut"<<endl;
    for (auto isi:arr){
        cout<<isi<<endl;
    }
    // Urutkan array dari terkecil ke besar;
    // STL -> Algoritma Merge Sort O(n log n)
    int n = sizeof(arr) / sizeof(arr[0]);
    // Asc (menaik) : kecil -> besar , Desc (menurun) : besar -> kecil
    sort(arr,arr + n);

    cout<<"Array sesudah terurut (ASCENDING)"<<endl;
    for (auto isi:arr){
        cout<<isi<<endl;
    }
    sort(arr,arr + n, greater<int>());
    cout<<"Array sesudah terurut (DESCENDING)"<<endl;
    for (auto isi:arr){
        cout<<isi<<endl;
    }

}