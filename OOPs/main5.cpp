#include <iostream>
using namespace std;

class A
{
public:
    int physics;
    int R;

    A()
    {
        R = 101;
    }
};

class B
{
public:
    int chemistry;

    int R;

    B()
    {
        R = 201;
    }
};

class C : public A, public B
{
public:
    int maths;
};

main()
{

    C obj;

    cout << obj.physics << endl;
    cout << obj.chemistry << endl;
    cout << obj.maths << endl;

    cout << obj.A::R << endl;
    cout << obj.B::R << endl;

    return 0;
}