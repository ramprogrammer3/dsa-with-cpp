#include <iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{

    string s = "abca";

    bool ans = validPalindrome(s);

    if (ans)
    {
        cout << "Your string is palindrome by removing one character " << endl;
    }
    else
    {
        cout << "your string is not a valid palindrome " << endl;
    }

    return 0;
}