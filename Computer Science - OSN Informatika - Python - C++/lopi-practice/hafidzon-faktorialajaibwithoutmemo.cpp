#include <iostream>
using namespace std;

int faktor(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x * faktor(x - 1);
    }
}

int main () {
    int x, y; cin >> x;
    for (int i = 0; i < x; i++){
        cin >> y;
        cout << faktor(y) << endl;
    }
}