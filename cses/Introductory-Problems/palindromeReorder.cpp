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

    string myString = "";

    for (int i = 0; i < 26; i++)
    {
        if (i != oddIndex)
        {
            myString = myString + string(freq[i] / 2, 'A' + i);
        }
    }

    string output;

    if (oddCount == 1)
    {
        output = myString + string(freq[oddIndex], 'A' + oddIndex);
        reverse(myString.begin(), myString.end());
        output = output + myString;
    }
    else
    {
        output = myString;
        reverse(myString.begin(), myString.end());
        output = output + myString;
    }

    cout << output << endl;
    return 0;
}
