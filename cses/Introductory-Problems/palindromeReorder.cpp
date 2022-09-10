#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string input;
    int oddCount = 0;
    int oddIndex = 26;
    cin >> input;

    unsigned int freq[26] = {0};

    for (int i = 0; i < input.size(); i++)
    {
        unsigned int myIndex = input[i] - 'A';
        freq[myIndex]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2)
        {
            // odd
            oddCount++;
            oddIndex = i;
        }
    }

    if (oddCount > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!(freq[i] % 2) && freq[i] != 0)
        {
            cout << string(freq[i] / 2, 'A' + i);
        }
    }

    if (oddCount == 1)
    {
        cout << string(freq[oddIndex], 'A' + oddIndex);
    }

    for (int i = 25; i >= 0; i--)
    {
        if (!(freq[i] % 2) && freq[i] != 0)
        {
            cout << string(freq[i] / 2, 'A' + i);
        }
    }

    return 0;
}
