#include <iostream>
using namespace std;

struct List{
    int N;
    int hasil;
    List *next;
};


int main(){
    List *faktorial;
    List *conductor;
    faktorial = new List;
    // Base case
    faktorial->N = 0;
    faktorial->hasil = 1;
    // Bottom - Up / Top - Down ?
    int N;
    cin>>N;
    conductor = faktorial;
    for(int i = 1; i<=N; i++){
        conductor->next = new List;
        conductor->next->N = conductor->N + 1;
        conductor->next->hasil =  conductor->next->N * conductor->hasil;
        conductor = conductor->next;
    }
    cout<<conductor->hasil;
    return 0;
}