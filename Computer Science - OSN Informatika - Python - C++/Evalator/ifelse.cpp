#include <iostream>
using namespace std;


int main(){
    int x;
    cin>>x;
    // x = 5
    if(x > 5){
        cout<<"x nya lebih dari 5 euy .."<<endl;
    }else if(x > 3){
        cout<<"x nya >3 dan x nya <=5 (3<x<=5)";
    }else{
        cout<<"x nya tidak lebih dari 5 dan tidak lebih dari 3 euy ..."<<endl;
    }
    return 0;
}