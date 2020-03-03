#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string word;
    char tempa, tempb;

    tempa = ' ';
    tempb = ' ';

    cin >> word;

    for(int i = 0; i < word.length(); i++)
    {
        tempa = word[i];

        if(tempa == tempb && tempa == 's')
        {
            cout << "hiss" << endl;
            return 0;
        }
        tempb = tempa;
    }
    cout << "no hiss" << endl;
    return 0;
}