#include <bits/stdc++.h>
using namespace std;
    bool isValid(string s) {
    stack<char> a;
        for (char i : s) {
            if (i == '(' || i == '[' || i == '{') {
            a.push(i);
            cout<<i<<endl;
            }
            else {
                cout<<i<<endl;
                    if (a.empty()) {
                        cout<<"Empty Satisfy"<<endl;
                        return false;
                    }
                    else {
                        char atas = a.top();
                        cout<<atas<<endl;
                        if (i == ')' && atas == '(') {
                            cout<<"popped!"<<endl;
                            a.pop();
                        }else if (i == ']' && atas == '[') {
                            a.pop();
                        }else if (i == '}' && atas == '{') {
                            a.pop();
                        }else {
                            cout<<"Not pair"<<endl;
                            return false;
                        }
                        

                    }
            }
        }
        return a.empty();
    }
int main(){
    string S;
    cin>>S;
    cout<<isValid(S)<<endl;
    return 0;
}