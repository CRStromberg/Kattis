#include <iostream>
#include <string>

using namespace std;

void solve(char &move, int &position);

int main()
{
    char move;
    string input;
    int position = 1;

    cin >> input;

    for(int i = 0; i < input.length(); i++)
    {
        move = input[i];
        solve(move, position);
    }
    
    cout << position << endl;

    return 0;
}

void solve(char &move, int &position)
{
    switch(move)
    {
        case 'A':
            if(position == 1) position = 2;
            else if(position == 2) position = 1;
            else position = position;
            break;
        case 'B':
            if(position == 2) position = 3;
            else if(position == 3) position = 2;
            else position = position;
            break;
        default:
            if(position == 1) position = 3;
            else if(position == 3) position = 1;
            else position = position;
            break;
        
    }
}