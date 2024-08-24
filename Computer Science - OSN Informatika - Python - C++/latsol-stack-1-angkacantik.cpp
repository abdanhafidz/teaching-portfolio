
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> stack;
    int Q,N,X,Y;
    cin>>Q>>N;
    while(Q--){
        cin>>X>>Y;
        if(X>Y){
            stack.push(X);
            stack.push(Y);
        }else if(X == Y){
            stack.push(X);
        }else{
            stack.push(Y);
            stack.push(X);
        }
    }
    
    while(N--){
        int atas = stack.top();
        cout<<atas<<endl;
        stack.pop();
    }
    return 0;
}