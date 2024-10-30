#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 25;
    float r = 0.8;
    // integer : bilangan bulat, 4/5 = 0,8 
    // floor(0.8) = 0

    int sum = 0;
    int Un = a; // Mula U1 = a
    while(Un != 0){
        cout<<Un<< " ";
        sum += Un;
        Un *= r; // Un = Un-1 * r , Un = Un * r ,    
    }
    cout<<sum<<endl;
}