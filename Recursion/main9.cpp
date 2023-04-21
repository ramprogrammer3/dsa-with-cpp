#include <iostream>
using namespace std;

void printDigit(int n)
{

    if (n == 0)
        return;

    int digit = n % 10;
    n = n / 10;
    printDigit(n);
    cout << digit;
}

int main()
{

    int n;
    cout << "Enter a number : " << endl;

    cin >> n;

    printDigit(n);

    return 0;
}