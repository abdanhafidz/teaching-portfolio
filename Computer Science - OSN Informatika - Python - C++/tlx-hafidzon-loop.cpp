
#include <iostream>
using namespace std;
int subprogram(){
    
}
int main()
{
    subprogram();
    int N;
    cin>>N;
    for(int i = 1; i<= N; i++){
        for(int s = 1; s<=(N - i); s++){
            cout<<" ";
        }
        for(int b = 1; b<=i ; b++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}