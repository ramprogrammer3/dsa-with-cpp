#include <iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

};


class Dog:private Animal{

    public:
    void print(){
        cout << this->age << endl;
    }

};

int main(){

    Dog d1;
    // cout << d1.age << endl;
    d1.print();

    return 0;
}