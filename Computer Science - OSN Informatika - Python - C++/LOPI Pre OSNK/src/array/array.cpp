#include <iostream>
using namespace std;


int main(){
    string siswa[3] = {"Raisya", "Asfa", "Handsel"};

    for(int i = 0; i < 3; i++){
        cout << "Siswa ke - " << i + 1 << " : " << siswa[i] << endl;
    }
}