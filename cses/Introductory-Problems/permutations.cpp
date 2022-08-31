#include<iostream>
using namespace std; 

int main()
{
    int maxNumber;
    cin >> maxNumber;

    int temp = 2;
    int count = 0;
    
    if(maxNumber == 1){
        cout << 1 << " ";
        return 0; 
    }
    
    if(maxNumber <= 3){
        cout << "NO SOLUTION";
        return 0; 
    }

    while (temp <= maxNumber)
    {
        cout << temp << " ";
        temp += 2;
        count++; 
    }

    temp = 1; 

    for (int i = 0; i < (maxNumber-count); i++)
    {
        cout << temp << " ";
        temp += 2; 
    }
    
    return 0;
}
