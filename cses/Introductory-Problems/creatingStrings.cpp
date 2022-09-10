
#include <iostream>
#include <vector>
using namespace std;

void permute(string s, vector<int> &letters, int max)
{
    if (s.size() == max)
    {
        cout << s << endl ;
        return; 
    }
    for (int i = 0; i < 26; i++)
    {
        if (letters[i])
        {
            s += i + 'a';
            letters[i]--;
            permute(s, letters, max);
            letters[i]++;
            s.pop_back();
        }
        
    }
    
}
int main()
{
    vector<int> lettersFreq(26, 0);
    vector<string> myAnswer;

    string userInput;
    cin >> userInput;

    for (int i = 0; i < (int)userInput.size(); i++)
    {
        int myIndex = userInput[i] - 'a';
        lettersFreq[myIndex]++;
    }

    permute("", lettersFreq, userInput.size()); 
    return 0;
}
