#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;

 int solve(int num, int power)
{
    long long int answer = 0;
    if (power == 0)
    {
        return 1;
    }
    answer = solve(num, power / 2);
    answer *= answer;
    answer %=  MOD; 
    if (power % 2)
    {
        answer *= num;
        answer %=  MOD;
    }
    return answer;
}

int main(int argc, char const *argv[])
{

    int input;
    cin >> input;
    

    cout << solve( 2 , input);
    return 0;
}
