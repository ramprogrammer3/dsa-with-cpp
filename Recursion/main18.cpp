#include <iostream>
#include <algorithm>
using namespace std;

string addRE(string X, int p1, string Y, int p2, int carry = 0)
{

    if (p1 < 0 && p2 < 0)
    {
        if (carry != 0)
        {
            return string(1, carry + '0');
        }
        return "";
    }

    // ek case solve karte hai
    int n1 = (p1 >= 0 ? X[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? Y[p2] : '0') - '0';

    int csum = n1 + n2 + carry;
    int digit = csum % 10;
    carry = csum / 10;
    string ans = "";
    ans.push_back(digit + '0');

    ans += addRE(X, p1 - 1, Y, p2 - 1, carry);
}
string findSum(string X, string Y)
{
    // Your code goes here
    string ans = addRE(X, X.size() - 1, Y, Y.size() - 1);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    string str = "123";
    string str1 = "111";

    string ans = findSum(str, str1);

    cout << ans << endl;

    return 0;
}