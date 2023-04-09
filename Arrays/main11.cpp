#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> &v)
{

    int ans = 0;

    for (int i = 0; i < v.size(); i++)
    {
        ans = ans ^ v[i];
    }

    return ans;
}

int main()
{

    vector<int> v{1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};

    int uniqueElement = findUnique(v);

    cout << "The unique element is " << uniqueElement << endl;

    return 0;
}