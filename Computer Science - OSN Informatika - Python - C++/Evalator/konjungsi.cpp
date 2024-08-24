#include <iostream>
using namespace std;

int main(){
    // Konjungsi
    // Gracia ditugaskan untuk membeli apel dan membeli jeruk, gracia membeli apel aja, gak beli jeruk
    bool beliApel = true;
    bool beliJeruk = false; // tidak membeli jeruk (Negasi / Negation) -> not membeli jeruk
    if(beliApel && beliJeruk){
        cout<<"True";
    }else{
        cout<<"False";
    }

    return 0;
}