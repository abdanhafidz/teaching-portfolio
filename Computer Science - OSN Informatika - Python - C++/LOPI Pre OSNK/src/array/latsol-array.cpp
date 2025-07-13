#include <iostream>
using namespace std;


int main(){
    int arr[10] = {1,3,3,4,5,6,8,2,-1,0};
    int ret = 0;
    for(int i = 0; i < 10; i++){
        if(i < 9){
            ret += arr[i] + arr[i + 1];
        }else{
            ret += arr[i];
        }
    }

    cout << ret << endl;
}