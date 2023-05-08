#include <iostream>
using namespace std;

class Maths
{

public:
    int sum(int a, int b)
    {
        return a + b;
    }

    int sum(int a, int b, int c)
    {
        return a + b + c;
    }

    int sum(int a, float b)
    {
        return a + b + 10;
    }

    //  double sum(int a,int b){
    //     return 500;
    //  }
};

int main()
{

    Maths obj;

    cout << obj.sum(10, 20) << endl;

    cout << obj.sum(10, 20, 30) << endl;

    cout << obj.sum(10, 2.3f) << endl;

    return 0;
}