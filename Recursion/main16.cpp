#include <iostream>
using namespace std;

void lastOccurence(string &s, char ch, int &ans, int i)
{

    if (i >= s.length())
    {
        return;
    }

    if (s[i] == ch)
    {
        ans = i;
    }

    lastOccurence(s, ch, ans, i + 1);
}

int lastOccurenceRTL(string &s, char ch, int &ans, int i)
{
    if (i < 0)
    {
        return -1;
    }

    if (s[i] == ch)
    {
        return i;
    }

    lastOccurenceRTL(s, ch, ans, i - 1);
}

int main()
{

    string s;
    char ch = 'r';

    cin >> s;
    int ans = -1;

    lastOccurence(s, ch, ans, 0);

    int ans1 = lastOccurenceRTL(s, ch, ans, s.size() - 1);

    cout << "ans one is " << ans1 << endl;

    cout << "last occurence at index " << ans << endl;

    return 0;
}
