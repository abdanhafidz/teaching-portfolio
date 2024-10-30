#include <iostream>
using namespace std;

int main(){

    bool biimplikasi1 = (1 + 2 == 3 + 0);
    cout<<"Biimplikasi 1 :"<<biimplikasi1<<endl;
    // Bernafas <=> Hidup :: 
    // Bernafas => Hidup :: ~Bernafas v Hidup
    // Hidup => Bernafas :: ~Hidup v Bernafas
    bool bernafas = true, hidup = false;
    bool prop1 = (!bernafas || hidup);
    bool prop2 = (!hidup || bernafas);
 // Cek dengan implikasi kiri -> kanan
    bool biimplikasi2 = prop1 && prop2;
    cout<<"Biimplikasi 2 : "<<biimplikasi2<<endl;
    return 0;
}