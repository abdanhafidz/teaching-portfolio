#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, n;
    cin >> q >> n;
    stack<int> tumpuk;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            tumpuk.push(x);
            tumpuk.push(y);
        }
        else if (x == y)
        {
            tumpuk.push(x);
        }
        else
        {
            tumpuk.push(y);
            tumpuk.push(x);
        }
    }

    for(int i=0;i<n;i++){
        cout<<tumpuk.top()<<endl;
        tumpuk.pop();
    }
}