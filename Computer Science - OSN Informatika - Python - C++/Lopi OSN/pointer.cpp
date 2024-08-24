#include <iostream>
using namespace std;


int main(){
    int x = 9;
    int* y = &x;
    // & -> Pointing Address , *-> Value fetch
    cout<<"x :"<<x<<" , y:"<<*y<<endl;
    x+=1;
    cout<<"x :"<<x<<" , y:"<<*y<<endl;
    return 0;
}