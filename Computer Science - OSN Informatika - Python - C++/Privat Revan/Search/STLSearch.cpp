#include <bits/stdc++.h>

using namespace std;

int main(){
    // Dikasih sebuah array berukuran n, coba cari x di dalam array tersebut
    int n,x;
    cin>>n>>x;
    vector<int> arr(n); // vector / dynamic array
    for(int i = 0 ; i < n ; i++){
        int data;
        cin>>data;
        arr.push_back(data);
    }
    auto first = arr.begin();
    auto last = arr.end();
    auto resSearch = find(first, last , x);
    if (resSearch != arr.end())
        cout << "Element Found at Position: " << resSearch - arr.begin() + 1;
    else
        cout << "Element not found.";
}