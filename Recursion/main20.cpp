#include <iostream>
using namespace std;

void removeOCCRE(string &s, string &part)
{
    int found = s.find(part);

    if (found != string::npos)
    {
        // part string has been located
        // please remove it

        string left_part = s.substr(0, found);
        string right_part = s.substr(found + part.size(), s.size());
        s = left_part + right_part;
        removeOCCRE(s, part);
    }
    else
    {
        return;
    }
}

int main()
{

    string s = "daabcbaabcbc";

    string part = "abc";

    removeOCCRE(s, part);

    cout << "The resulting string is " << s << endl;

    return 0;
}