#include <iostream>
using namespace std;

int expandAroundIndex(string s, int i, int j)
{

    int count = 0;

    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubString(string s)
{
    int count = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        int oddKaAns = expandAroundIndex(s, i, i);
        count = count + oddKaAns;

        int evenKaAns = expandAroundIndex(s, i, i + 1);
        count = count + evenKaAns;
    }

    return count;
}

int main()
{
    string s = "abc";

    int answer = countSubString(s);

    cout << "Total subString is " << answer << endl;

    return 0;
}