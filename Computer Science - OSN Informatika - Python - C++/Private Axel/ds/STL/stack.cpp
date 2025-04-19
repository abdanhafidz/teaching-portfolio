#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> tumpuk;
    tumpuk.push(1); // First In
    tumpuk.push(2);
    tumpuk.push(3);
    tumpuk.push(4); // Last In

    cout<<"The top element is : "<<tumpuk.top()<<endl;
    tumpuk.pop(); // first out -> 4
    cout<<"The top element is : "<<tumpuk.top()<<endl;
    tumpuk.pop();
    cout<<"The top element is : "<<tumpuk.top()<<endl;
    tumpuk.pop();
    cout<<"The top element is : "<<tumpuk.top()<<endl;
    tumpuk.pop();
    if(tumpuk.empty()){
        cout<<"Tumpukan sudah kosong!"<<endl;
    }else{
        cout<<"Masih ada isi!"<<endl;
    }
    return 0;
}
