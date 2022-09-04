#include <iostream>
using namespace std;

unsigned long long int twoKnights(unsigned long long int n);

int main()
{
    unsigned int boardMax;
    cin >> boardMax;

    for (unsigned int i = 1; i <= boardMax; i++)
    {
        cout << twoKnights(i) << endl;
    }

    return 0;
}

unsigned long long int twoKnights(unsigned long long int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else
    {
        return ((n * n) * (n * n - 1) / 2) - (n - 1) * (n - 2) * 2 * 2;
    }
}