#include <iostream>

using namespace std;

int get_points(char &suit, char card[2]);

int main()
{
    int n, points;
    char suit;
    char card[2];

    cin >> n >> suit;

    points = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> card[0] >> card[1];
            points += get_points(suit, card);
        }
    }

    cout << points << endl;
    return 0;
}

int get_points(char &suit, char card[2])
{
    switch(card[0])
    {
        case 'A':
            return 11;
            break;
        case 'K':
            return 4;
            break;
        case 'Q':
            return 3;
            break;
        case 'J':
            if(suit == card[1]) return 20;
            else return 2;
            break;
        case 'T':
            return 10;
            break;
        case '9':
            if(suit == card[1]) return 14;
            else return 0;
            break;
        default:
        return 0;
    }
}