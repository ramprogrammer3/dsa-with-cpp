#include <iostream>
#include <queue>
using namespace std;

int main()
{

    string str = "aabc";
    int freq[26] = {0};
    queue<char> q;

    string ans = "";

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        freq[ch - 'a']++;
        q.push(ch);

        while (!q.empty())
        {
            if (freq[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }

        if (q.empty())
        {
            ans.push_back('#');
        }
    }

    cout << ans << endl;

    return 0;
}