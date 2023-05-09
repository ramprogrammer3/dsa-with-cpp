#include <iostream>
using namespace std;

class abc
{

public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // defalut dump copy constructor
    // abc(const abc &obj){
    //     x = obj.x;
    //     y = obj.y;
    // }

    // deep copy
    abc(const abc &obj)
    {
        x = obj.x;
        y = new int(*obj.y);
    }

    void print() const
    {
        cout << x << " " << y << " " << *y << endl;
    }

    ~abc()
    {
        delete y;
    }
};

int main()
{

    abc a(1, 2);
    a.print();

    abc b(a);
    b.print();
    *b.y = 20;

    b.print();

    a.print();
    return 0;
}