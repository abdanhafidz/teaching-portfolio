#include <iostream>
using namespace std;

int main(){
    // Disjungsi
    // Rina ditugaskan untuk membeli apel atau membeli jeruk, 
    // Rina membeli jeruk aja tapi gak beli apel
    bool beliApel = false; // gak beli Apel
    bool beliJeruk = true; 
    if(beliApel || beliJeruk){
        cout<<"True";
    }else{
        cout<<"False";
    }

    return 0;
}