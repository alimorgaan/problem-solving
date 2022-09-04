#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string myString;
    cin >> myString;
    char oddChar;
    int oddFlag = 0;
    int counter = 1;
    int oddIndex;
    sort(myString.begin(), myString.end());

    for (int i = 0; i < myString.size(); i++)
    {
        if (i == myString.size() - 1)
        {
            if (counter % 2)
            {
                // odd
                oddFlag++;
                oddIndex = i;
                oddChar = myString[i]; 
                break; 
            }
        }
        if (myString[i] == myString[i + 1])
        {
            counter++;
        }
        else
        {

            if (counter % 2)
            {
                // odd
                oddFlag++;
                oddChar = myString[i];
                oddIndex = i;
            }
            counter = 1;
        }
    }
    if (oddFlag > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    else if (oddFlag == 1)
    {
        myString.erase(oddIndex, 1);
    }

    for (int i = 0; i < myString.size() / 2; i++)
    {
        if (myString[i] != myString[myString.size() - 1 - i])
        {
            
            myString.insert(myString.size() - i, string(1, myString[i]));
            myString.erase(myString.begin() + i);
        }
    }
    if(oddFlag == 1){
        myString.insert(myString.size() / 2, string(1, oddChar));
    }
    

    cout << myString << endl;
    return 0;
}
