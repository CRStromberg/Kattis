#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void get_card(int &tablet, int &compass, int &gear, char card);
int get_points(int &tablet, int &compass, int &gear);

int main()
{
    string input;
    int points, tablet, compass, gear;
    points = 0;
    tablet = 0;
    compass = 0 ;
    gear = 0;

    cin >> input;

    for(int i = 0; i < input.length(); i++)
    {
        get_card(tablet, compass, gear, input[i]);
    }
    points = get_points(tablet, compass, gear);

    cout << points << endl;
    return 0;
}

void get_card(int &tablet, int &compass, int &gear, char card)
{
    switch (card)
    {
    case 'T':
        tablet++;
        break;
    case 'C':
        compass++;
        break;
    default:
        gear++;
        break;
    }
}

int get_points(int &tablet, int &compass, int &gear)
{
    int temp = 0;

    temp = pow(tablet, 2) + pow(compass, 2) + pow(gear, 2);

    if(tablet <= compass && tablet <= gear) temp = temp + (tablet * 7);
    else if(compass <= tablet && compass <= gear) temp = temp + (compass * 7);
    else temp = temp + (gear * 7);

    return temp;    
}