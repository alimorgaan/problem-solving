#include <iostream>
#include <vector>
using namespace std;

unsigned long long grid(unsigned long long x, unsigned long long y);

int main()
{
    unsigned int size;
    cin >> size; 
    vector<unsigned long long> myVector(size*2);

    
    for (unsigned int i = 0; i < 2*size; i++)
    {
        cin >> myVector[i];
    }

    

    for (unsigned int i = 0; i < size*2; i = i + 2)
    {
        cout << grid(myVector[i], myVector[i + 1]) << endl; 
    }
    
    
    return 0;
}

unsigned long long grid(unsigned long long y, unsigned long long x)
{
    if (x > y)
    {
        if (x % 2)
        {
            // x is odd
            unsigned long long colStart = (x - 1) * (x - 1) + (x + x - 1);
            return colStart - (y - 1);
        }
        else
        {
            // x is even
            unsigned long long colStart = (x - 1) * (x - 1) + 1;
            return colStart + (y - 1);
        }
    }
    else
    {
        if (y % 2)
        {
            // y odd
            unsigned long long rowStart = (y - 1) * (y - 1) + 1;
            return rowStart + (x - 1); 
        }
        else
        {
            // y even 
            unsigned long long rowStart = (y - 1) * (y - 1) + (y + y - 1);
            return rowStart - (x - 1); 
        }
    }
}
