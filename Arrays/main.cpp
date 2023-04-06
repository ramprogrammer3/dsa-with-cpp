#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // create vector
    vector<int> arr;

    arr.push_back(5);
    arr.push_back(7);

    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    cout << sizeof(arr) / sizeof(int) << endl;

    vector<int> brr(10);
    cout << "size of b " << brr.size() << endl;
    cout << "capacity of brr " << brr.capacity() << endl;

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }

    cout << endl;

    vector<int> brr1(10, -1);
    cout << "size of b " << brr1.size() << endl;
    cout << "capacity of brr " << brr1.capacity() << endl;

    for (int i = 0; i < brr1.size(); i++)
    {
        cout << brr1[i] << " ";
    }

    cout << endl;

    vector<int> crr{10, 20, 30, 40, 50};

    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }

    cout << endl;

    cout << "crr is empty or not " << crr.empty() << endl;

    vector<int> drr;
    cout << "vector drr is empty or not " << drr.empty() << endl;

    return 0;
}
