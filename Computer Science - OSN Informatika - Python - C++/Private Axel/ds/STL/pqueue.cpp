#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    int arr[6] = {9,3,6,5,4,2};
    for (int angka:arr){
        pq.push(angka);
    }

    // Hasil Pqueue
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}
