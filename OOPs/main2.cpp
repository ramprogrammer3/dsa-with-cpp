#include <iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    void eat(){
        cout << "Eating " << endl;
    }

};


class Dog:public Animal{

    public:
    void print(){
        cout << this->age << endl;
    }

};

int main(){

    Dog d1;
    // cout << d1.age << endl;
    d1.print();
    d1.eat();

    return 0;
}