#include <iostream>
using namespace std;

bool checkKey(string &str, int n, char key, int i)
{

    if (i >= n)
    {
        return false;
    }

    // 1 case solve kar do

    if (str[i] == key)
        return true;

    bool ans = checkKey(str, n, key, i + 1);
    return ans;
}

int main()
{

    string str = "ram kumar";

    int n = str.length();

    char key = 'r';

    bool ans = checkKey(str, n, key, 0);

    cout << "answer is " << ans << endl;

    return 0;
}