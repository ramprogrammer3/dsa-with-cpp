#include <iostream>
using namespace std;

int main()
{

    // const int x = 5;
    // cout << x << endl;

    // int *a = new int;
    // *a = 5;

    // cout << *a << endl;

    // delete a;
    // int b = 10;

    // a = &b;

    // cout << *a << endl;

    const int *a = new int(5);
    cout << *a << endl;

    delete a;
    int b = 10;

    a = &b;

    cout << *a << endl;

    return 0;
}