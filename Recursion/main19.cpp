#include <iostream>
using namespace std;

bool isPalindrome(string &str, int s, int e)
{

    if (s > e)
        return true;

    if (str[s] != str[e])
        return false;

    return isPalindrome(str, s + 1, e - 1);
}

int main()
{

    string str = "racecar";
    int s = 0;
    int e = str.length() - 1;

    bool ans = isPalindrome(str, s, e);

    if (ans)
    {
        cout << "Palindrome " << endl;
    }
    else
    {
        cout << "Not Palindrome " << endl;
    }

    return 0;
}