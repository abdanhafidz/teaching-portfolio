#include <iostream>
using namespace std;


int main(){
    int arr[100];
    arr[1] = 5;
    for(int i = 0; i<100; i++){
        cout<<&arr[i]<<endl;
    }
}