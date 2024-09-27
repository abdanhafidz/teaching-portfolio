#include <bits/stdc++.h>
using namespace std;
int cari_min(int arr[], int n){
    int min = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] < min){
            // Ada yang lebih minimum
            min = arr[i];
        }
    }
    return min;
}
int cari_max(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] > max){
            // Ada yang lebih minimum
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[10] = {1,4,4,10,27,3,4,5,6,1};
    // 1,5,3,4,2
    // 1,3,2,4,5 (Lebih cepat)
    cout<<cari_min(arr,10)<<endl;
    cout<<cari_max(arr,10)<<endl;
}