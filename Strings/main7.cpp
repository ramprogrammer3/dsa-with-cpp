#include <iostream>
using namespace std;

int main()
{

    string str = "This is a simple sentence ";
    string str1 = "This is a simple sentence ";

    cout << str.compare(str1) << endl;

    cout << str.substr(0, 3) << endl;
    cout << str.substr(0, 6) << endl;

    cout << "length of string is " << str.length() << endl;

    if (str.empty())
    {
        cout << "String is  empty " << endl;
    }
    else
    {
        cout << "string is not empty " << endl;
    }

    str.push_back('O');
    cout << str << endl;

    str.pop_back();

    cout << str << endl;

    string str;

    // cin >> str;
    getline(cin, str);

    cout << str << endl;

    return 0;
}