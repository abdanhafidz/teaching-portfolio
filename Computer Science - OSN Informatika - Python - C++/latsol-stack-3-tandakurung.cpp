
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <string> stack;
    string S;
    cin>>S;
    for(auto cur : S){
        if(cur == '('){
            stack.push("(");
        }else{
            if(!(stack.empty())){
                stack.pop();
            }else{
                // Saat kita nerima kurung tutup ")" kemudian di stack kosong itu artinya kurung tutup tidak bisa dipasangkan oleh siapapun
                cout<<"TIDAK"<<endl;
                exit(0);
            }
        }
    }
    
    if(stack.empty()){
        cout<<"YA"<<endl;
    }else{
        cout<<"TIDAK"<<endl;
    }

    return 0;
}