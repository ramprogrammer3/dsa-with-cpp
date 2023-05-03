#include <iostream>
using namespace std;

class Animal{
    
    private:
    int weight;
    // state or property
    public:
    int age;
    string name;


    // constructor
    Animal(){
        cout << "constructor is called" << endl;
    }


    // behaviour
    void eat(){
        cout << "eating " << endl;
    }

    void sleep(){
        cout << "sleeping " << endl;
    }

    // getter

    int getWeight(){
        return weight;
    }

    void setWeight(int weight){
        this->weight = weight;
    }
};

int main(){

    cout << "size of empty class is " << sizeof(Animal) << endl;

    // objection creation

    // static allocation
    Animal ramesh;
    cout << "agae of ramesh is " << ramesh.age << endl;
    cout << "name of ramesh is " << ramesh.name << endl;
    ramesh.age = 12;
    ramesh.name = "lion";

    cout << "agae of ramesh is " << ramesh.age << endl;
    cout << "name of ramesh is " << ramesh.name << endl;

    ramesh.eat();
    ramesh.sleep();

    ramesh.setWeight(101);

    cout << "weight of ramesh is " << ramesh.getWeight() << endl;


    //dynamic allocation
    Animal* suresh = new Animal;
    suresh->age = 15;
    suresh->name = "delhi";
    (*suresh).age = 20;
    (*suresh).name = "ram";

    suresh->eat();
    suresh->sleep();



    return 0;  
}