#include <iostream>
using namespace std;

void moveDisks(int disks, int from, int to, int temp)
{
    if (disks > 0)
    {
        moveDisks(disks - 1, from, temp, to);
        cout << from << ' ' << to << endl ;
        moveDisks(disks - 1, temp, to, from); 
    }
}

int main()
{
    int disksNum;
    cin >> disksNum;

    int stepsCount = 1;
    for (int i = 0; i < disksNum; i++)
    {
        stepsCount *= 2;
    }
    stepsCount--;

    cout << stepsCount << endl;

    moveDisks(disksNum, 1, 3, 2);
    return 0;
}
