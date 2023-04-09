#include <iostream>
#include <vector>
using namespace std;

void triplateSum(vector<int> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            for (int k = j + 1; k < v.size(); k++)
            {
                if (v[i] + v[j] + v[k] == 80)
                {
                    cout << "( " << v[i] << " , " << v[j] << " , " << v[k] << " ) " << endl;
                }
            }
        }
    }
}

int main()
{

    vector<int> v{10, 20, 30, 40, 50, 50, 60};
    triplateSum(v);
    return 0;
}
