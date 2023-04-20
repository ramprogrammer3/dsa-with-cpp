#include <iostream>
using namespace std;

string reverse(string s)
{
    // code here.
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (isalpha(s[i]) && isalpha(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if (!isalpha(s[i]))
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return s;
}

int main()
{

    string s = "B&A";

    string answer = reverse(s);

    cout << "Reverse string is " << answer << endl;

    return 0;
}