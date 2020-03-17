#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;

    getline(cin, input);

    for(int i = 0; i < input.length(); i++)
    {
        switch (input[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            input.erase(i+1, 2);
            break;
        default:
            break;
        }
    }
    cout << input << endl;
    return 0;
}