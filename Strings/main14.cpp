#include <iostream>
using namespace std;

bool isAnagram(string a, string b)
{

    int freqTable[256] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        freqTable[a[i]]++;
    }

    for (int i = 0; i < b.size(); i++)
    {
        freqTable[b[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freqTable[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    string s1 = "ramkumar";

    string s2 = "marmarku";

    if (isAnagram(s1, s2))
    {
        cout << "your strings are anagram " << endl;
    }
    else
    {
        cout << "Your strings are not anagram " << endl;
    }

    return 0;
}