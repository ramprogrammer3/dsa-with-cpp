#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q)
{

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
}

void reverseKElement(queue<int> &q, int k){

    if(k == 1) return;

    int temp = q.front();
    q.pop();

    k = k - 1;

    reverseKElement(q,k);

    q.push(temp);
}

int main(){


    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
    q.push(5);

    print(q);
    reverseKElement(q,4);
    print(q);
    

    return 0;
}