#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Speaking " << endl;
    }

    Animal()
    {
        cout << "i am inside animal constructor " << endl;
    }
};

class Dog : public Animal
{
public:
    // overriding
    void speak()
    {
        cout << "barking " << endl;
    }

    Dog()
    {
        cout << "I am inside dog constructor " << endl;
    }
};

int main()
{

    // Animal a;

    // a.speak();

    // Dog b;
    // b.speak();

    // Animal * c = new Animal();
    // c->speak();

    // Dog * a =new Dog();
    // a->speak();

    // upcasting
    // Animal *a = new Dog();
    // a->speak();

    // Dog * b = (Dog*)new Animal();
    // b->speak();

    // Animal * p = new Animal();

    // Animal * p = new Dog(); both

    // Dog * a = new Dog(); both

    Dog *a = (Dog *)new Animal();

    return 0;
}