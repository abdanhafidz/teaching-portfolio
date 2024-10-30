#include <iostream>
using namespace std;

int main(){
    bool p = true;
    bool q = true;
    bool prop = (p && q);
    cout<<"P|Q|P&Q|PVQ|P^Q|"<<endl;
    cout<<p<<"|"<<q<<"|"<<prop<<"|"<<(p || q)<<"|"<<(p ^ q)<<endl;

    p = true;
    q = false;
    prop = (p && q);
    cout<<p<<"|"<<q<<"|"<<prop<<"|"<<(p || q)<<"|"<<(p ^ q)<<endl;

    p = false;
    q = true;
    prop = (p && q);
    cout<<p<<"|"<<q<<"|"<<prop<<"|"<<(p || q)<<"|"<<(p ^ q)<<endl;

    p = false;
    q = false;
    prop = (p && q);
    cout<<p<<"|"<<q<<"|"<<prop<<"|"<<(p || q)<<"|"<<(p ^ q)<<endl;

    return 0;
}