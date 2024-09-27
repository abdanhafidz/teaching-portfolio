#include <iostream>
using namespace std;


int main(){
    int x,y;
    cin>>x>>y;
    int bitwise = x & y;
    cout<<bitwise<<endl;
    bitwise = x | y;
    cout<<bitwise<<endl;
    // And, cek apakah si x ganjil atau genap
    if( (x & 1) == 0){
        cout<<"x genap"<<endl;
    }else{
        cout<<"x ganjil"<<endl;
    }
    // xor
    cout<< (x ^ y) <<endl;
    // Not (~)
    cout<<(~y)<<endl;

    // Right Shift
    int shift = x >> y;
    cout<<shift<<endl;
    shift = x << y;
    cout << (x << y) <<endl;
    cout<<shift<<endl;
}