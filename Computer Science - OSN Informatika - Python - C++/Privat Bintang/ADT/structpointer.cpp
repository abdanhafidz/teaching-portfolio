#include <iostream>
using namespace std;


typedef struct Human{
    public:string name;
    public:int age;
    public:void born(string name){
        this->name = name;
        this->age = 1;
    }
};

void ultah(Human *h){
    h->age++;
}

int main(){
    Human bintang;
    cout<<bintang<<endl;
}
    
