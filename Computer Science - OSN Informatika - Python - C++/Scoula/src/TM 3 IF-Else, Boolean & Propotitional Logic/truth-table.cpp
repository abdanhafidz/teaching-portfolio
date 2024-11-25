#include <iostream>
using namespace std;

int main(){
    bool p,q;
    cout<<"p|"<<"q|"<<"p&q|"<<"pVq|"<<"p^q|"<<"p=>q|"<<"p<=>q|"<<endl;
    p = true, q = true;
    cout<<p<<"|"<<q<<"|"<<(p && q)<<"  |"<<(p || q)<<"  |"<<(p ^ q)<<"  |"<<(!p or q)<<"   |"<<(p == q)<<"    |"<<endl;
    p = true, q = false;
    cout<<p<<"|"<<q<<"|"<<(p && q)<<"  |"<<(p || q)<<"  |"<<(p ^ q)<<"  |"<<(!p or q)<<"   |"<<(p == q)<<"    |"<<endl;
    p = false, q = true;
    cout<<p<<"|"<<q<<"|"<<(p && q)<<"  |"<<(p || q)<<"  |"<<(p ^ q)<<"  |"<<(!p or q)<<"   |"<<(p == q)<<"    |"<<endl;
    p = false, q = false;
    cout<<p<<"|"<<q<<"|"<<(p && q)<<"  |"<<(p || q)<<"  |"<<(p ^ q)<<"  |"<<(!p or q)<<"   |"<<(p == q)<<"    |"<<endl;
    return 0;
}