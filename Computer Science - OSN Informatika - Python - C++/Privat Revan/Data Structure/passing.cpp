#include <iostream>
using namespace std;


int main(){
    int x = 5;
    int *y = &x;
    // Kalau kita rubah si y, kerubah juga si x;
    cout<<"Addr x = "<<&x<<endl;
    cout<<"Addr y = "<<&y<<endl;
    cout<<"Val Pointer y -> x = "<<y<<endl;
    cout<<"Reffering Val y -> x = "<<*y<<endl;
    // Pass By Refference
    *y += 1;
    cout<<x<<endl;
    cout<<*y<<endl;
    x+=1;
    cout<<x<<endl;
    cout<<*y<<endl;
    
}