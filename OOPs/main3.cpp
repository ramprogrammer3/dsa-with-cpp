#include <iostream>
using namespace std;

class Car
{

public:
    string name;
    int weight;
    int age;

    void speedUp()
    {
        cout << "Speeding Up" << endl;
    }

    void breakMarro()
    {
        cout << "break maardi " << endl;
    }
};

class Scorpio : public Car
{
};

int main()
{

    Scorpio ramwali;
    ramwali.speedUp();

    return 0;
}