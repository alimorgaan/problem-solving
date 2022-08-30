#include <iostream>
using namespace std;

int main()
{
    string myString;
    cin >> myString;
    int tempLength = 0;
    int maxLength = 0;

    if (myString.length() == 1)
    {
        cout << 1;
        return 0;
    }

    for (int i = 0; i < myString.length(); i++)
    {
        if (myString[i + 1] == myString[i])
        {
            // same char keep counting
            tempLength++;
        }
        else
        {
            // different char ---> if length is bigger
            if ((tempLength + 1) > maxLength)
            {
                maxLength = tempLength + 1;
                
            }
            tempLength = 0; //start counting again 
        }
    }

    cout << maxLength;

    return 0;
}
