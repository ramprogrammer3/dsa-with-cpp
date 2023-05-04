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
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout << "constructor is called" << endl;
    }

    // parameterized constructor

    Animal(int age){
        this->age = age;
        cout << "Parameterized constructor " << endl;
    }


    Animal (int age, int weight){
        this->age = age;
        this->weight = weight;
        cout << "Parameterized constructor 2 " << endl;
    }

    Animal (int age, int weight, string name){
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout << "Parameterized constructor 3 " << endl;
    }


    // copy constructor

    Animal(Animal &obj){
        this->age = obj.age;
        this->name = obj.name;
        this->weight = obj.weight;

        cout << "I am inside copy constructor" << endl;

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

    // setter

    void setWeight(int weight){
        this->weight = weight;
    }

    ~Animal(){
        cout << "I am inside destructor " << endl;
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


    Animal a;
   

    Animal * b = new Animal(29);

    Animal *c = new Animal(10,20);

    Animal *d = new Animal(10,10,"ram");

    Animal e(a);

    delete b;
    delete c;
    delete d;

   
    return 0;  
}