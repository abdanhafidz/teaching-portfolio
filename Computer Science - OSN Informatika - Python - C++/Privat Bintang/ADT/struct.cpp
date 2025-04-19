#include <iostream>
using namespace std;

typedef struct Habitat{
    public:string province;
    public:string jungle;
};

typedef struct Animal{
    public:string name;
    public:int age;
    private:string species;
    public:void init(string name, int age, string species){
        this->name = name;
        this->age = age;
        this->species = species;
    }
    public:void move(){
        cout<<this->name + " is moving"<<endl;
    }
    public:string getSpecies(){
        return species;
    }
    public:Habitat habitat;
};
int main(){
    Animal kucing;
    kucing.init("Meong", 2, "Persian");
    kucing.move();
    kucing.getSpecies();
    kucing.habitat.province = "Jawa Timur";
    kucing.habitat.jungle = "hutan Mangrove";
    cout<<kucing.name<<endl;
}