#include <iostream>
using namespace std;
int tambah(int a, int b){
    if(b == 0){
        return a;
    }else{
        return tambah(a,b - 1) + 1;
    }
}
int kurang(int a, int b){
    if(b == 0){
        return a;
    }else{
        return kurang(a,b - 1) - 1;
    }
}

int kali(int a, int b){
    if(b == 1){
        return a;
    }else{
        return kali(a,b - 1) + a;
    }
}

int bagi(int a, int b){
    if(a == 0){
        return 0;
    }else{
        return bagi(a - b,b) + 1;
    }
}
int pangkat(int a, int b){
    if(a == 1){
        return 1;
    }else{
        return a * pangkat(a, b - 1);
    }
}

int f(int n){
    if(n == 1){
        return 1;
    }else{
        return f(n - 2) + n * n;
    }
}

int g(int n){
    if(n == 1){
        return 1;
    }else{
        return g(n - 1) + n;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"tambah = "<<tambah(a,b)<<endl;
    cout<<"kurang = "<<kurang(a,b)<<endl;
    cout<<"kali = "<<kali(a,b)<<endl;
    cout<<"bagi = "<<bagi(a,b)<<endl;
    return 0;
}