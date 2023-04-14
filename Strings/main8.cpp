#include <iostream>
using namespace std;

bool compareString(string a, string b)
{

    if (a.length() != b.length())
    {
        return false;
    }
    else
    {

        int j = 0;

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[j])
            {
                return false;
            }
            j++;
        }
    }

    return true;
}

int main()
{

    string str = "ram kumar";
    string str2 = "bam kumar";

    bool ans = compareString(str, str2);

    cout << ans << endl;

    return 0;
}