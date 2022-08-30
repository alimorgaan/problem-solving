#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size = 0;
    unsigned long moves = 0;
    cin >> size;

    vector<long> myVector(size);

    for (int i = 0; i < size; i++)
    {
        cin >> myVector[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        while (myVector[i + 1] < myVector[i])
        {
            moves++;
            myVector[i + 1]++;
        }
    }
    cout << moves;
    return 0;
}