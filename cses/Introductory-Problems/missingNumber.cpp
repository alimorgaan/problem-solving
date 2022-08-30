#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int maxNumber;
    cin >> maxNumber;

    int vectorSize = maxNumber - 1;

    vector<int> myVector(vectorSize);

    for (int i = 0; i < vectorSize; i++)
    {
        cin >> myVector[i];
    }

    sort(myVector.begin(), myVector.end());
    
    if(myVector[0] != 1){
        cout << 1;
        return 0;
    }
    if(myVector[vectorSize - 1] != maxNumber){
        cout << maxNumber;
        return 0;
    }
    for (int i = 0; i < vectorSize; i++)
    {
        if((myVector[i+1] - myVector[i]) ==2 ){
            cout << myVector[i] + 1;
            break; 
        }
    }

    return 0;
}
