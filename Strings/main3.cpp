#include <iostream>
// #include <string>
#include <cstring>
using namespace std;

bool isPalindrome(char ch[])
{
    int i = 0;
    int j = strlen(ch) - 1;

    while (i <= j)
    {
        if (ch[i] != ch[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{

    char ch[100];
    cout << "Enter a palindromic string " << endl;
    cin.getline(ch, 100);

    bool ans = isPalindrome(ch);

    if (ans)
    {
        cout << "Your string is palindrome " << endl;
    }
    else
    {
        cout << "Your string is not palindrome " << endl;
    }

    return 0;
}