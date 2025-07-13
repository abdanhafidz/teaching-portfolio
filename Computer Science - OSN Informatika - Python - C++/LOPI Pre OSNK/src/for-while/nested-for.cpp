#include <iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int sum = 0;
    for(int i = 1; i<=N; i++){
        for(int j = 1; j<=i; j++){
            sum += j;
        }
    }

    cout << sum <<endl;
}