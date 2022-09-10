#include <iostream>

using namespace std;

int numberOfZeros(int input)
{
    if (input % 10)
    {
        return 0;
    }
    int counter = 0;
    while (input % 10 == 0)
    {
        counter++;
        input /= 10;
    }
    return counter;
}
int main(int argc, char const *argv[])
{

    unsigned int input;
    cin >> input;
    unsigned long long int acc = 1;
    unsigned int counter = 0;
    for (int i = 1; i <= input; i++)
    {
        acc *= i;
        counter += numberOfZeros(acc);
        if (numberOfZeros(acc))
            acc = 1;
    }
    cout << counter;
    return 0;
}
