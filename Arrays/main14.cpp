#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        int element = v[i];
        for (int j = i + 1; j < v.size(); j++)
        {
            if (element + v[j] == 9)
            {
                cout << "( " << element << " , " << v[j] << " )" << endl;
            }
        }
    }
}

int main()
{

    vector<int> v{1, 3, 5, 7, 2, 4, 6};

    pairSum(v);
    return 0;
}
