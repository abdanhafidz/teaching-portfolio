#include<bits/stdc++.h>
using namespace std;
bool prima(int n) {
    int faktor=0;
    for (int i=1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            faktor += 2;
        }
    }
    if (faktor > 4) {
        return false;
    } else {
        return true;
    }
}
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        if (prima(a[i])) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
    }
}