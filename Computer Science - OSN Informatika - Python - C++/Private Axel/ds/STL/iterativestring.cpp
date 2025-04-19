#include <iostream>
using namespace std;

int main(){
    int nilais[5] = {100, 90, 50, 30, 20};
    for(int nilai : nilais){
        cout<<nilai<<endl;
    }

    string nama = "Axel";

    for(char huruf: nama){
        cout<<huruf<<endl;
    }
    
    return 0;
}