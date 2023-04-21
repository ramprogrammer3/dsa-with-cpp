#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &v, int s, int e, int key)
{

    if (s > e)
        return -1;

    int m = (s + e) / 2;

    if (v[m] == key)
        return m;

    if (v[m] < key)
    {
        return binarySearch(v, m + 1, e, key);
    }
    else
    {
        return binarySearch(v, s, m - 1, key);
    }
}

int main()
{

    vector<int> v{10, 20, 30, 40, 50, 60, 70, 234, 2333, 8790};

    int s = 0;
    int e = v.size() - 1;

    int key = 234;

    int isElementFound = binarySearch(v, s, e, key);

    cout << "Element is found at index " << isElementFound << endl;

    return 0;
}