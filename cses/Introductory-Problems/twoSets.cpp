#include <iostream>
#include <vector>

using namespace std;
int main()
{

    unsigned long int maxNum;

    cin >> maxNum;

    unsigned long long int summation = maxNum * (maxNum + 1) / 2;

    if (summation % 2)
    {
        // odd
        cout << "NO" << endl;
        return 0;
    }

    vector<unsigned int> setOne;
    vector<unsigned int> setTwo;
    unsigned long  int temp = 0;
    unsigned long  int target = 0;
    unsigned long  int count = 0;

    while (temp < (summation / 2))
    {
        temp += (maxNum - count);
        setOne.push_back(maxNum - count);
        count++;
        target = (summation / 2) - temp;
        if (target < (maxNum - (count - 1)))
        {
            if (target != 0)
            {
                setOne.push_back(target);
            }
            while ((maxNum - count) != 0)
            {
                if (((maxNum - count) != target))
                {
                    setTwo.push_back((maxNum - count));
                }
                count++;
            }
            break;
        }
    }

    cout << "YES" << endl;
    cout << setOne.size() << endl;
    for (unsigned long int i = 0; i < setOne.size(); i++)
    {
        cout << setOne[i] << " ";
    }

    cout << endl;
    cout << setTwo.size() << endl;
    for (unsigned long int i = 0; i < setTwo.size(); i++)
    {
        cout << setTwo[i] << " ";
    }

    return 0;
}
