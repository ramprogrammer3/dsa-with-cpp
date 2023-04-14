#include <iostream>
using namespace std;

int main()
{

    char name1[100];
    cin >> name1;

    cout << "Your name is " << name1 << endl;

    char name[100];
    cin >> name;

    for (int i = 0; i < 10; i++)
    {
        cout << "index " << i << " value " << name[i] << endl;
    }

    int value = (int)name[8];

    cout << "value is : " << value << endl;

    // char ch[100];
    // cout << "Enter your name : " << endl;
    // cin >> ch;

    // cout << "your name is " << ch << endl;

    char ch[100];

    ch[0] = 'a';

    ch[1] = 'b';

    cin >> ch[2];

    cout << ch[0] << ch[1] << ch[2] << endl;

    return 0;
}