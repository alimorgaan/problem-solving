#include <iostream>

using namespace std;

int main()
{
    long userInput;
    cin >> userInput;
    cout << userInput << ' ';

    while (userInput != 1)
    {
        if (userInput % 2)
        {
            // odd
            userInput = userInput * 3 + 1;
        }
        else
        {
            // even
            userInput = userInput / 2;
        }
        cout << userInput << ' ';
    }
    return 0;
}
