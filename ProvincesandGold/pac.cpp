#include <iostream>

using namespace std;

int total_points(int &G, int &S, int &C);
void get_card(int &total);

int main()
{
    int G, S, C, total;
    total = 0;

    cin >> G >> S >> C;
    total = total_points(G, S, C);
    get_card(total);

    return 0;
}

int total_points(int &G, int &S, int &C)
{
    return (G * 3) + (S * 2) + (C * 1);
}

void get_card(int &total)
{
    /*
    Province (costs 8, worth 6 victory points)
    Duchy (costs 5, worth 3 victory points)
    Estate (costs 2, worth 1 victory point)

    Gold (costs 6, worth 3 buying power)
    Silver (costs 3, worth 2 buying power)
    Copper (costs 0, worth 1 buying power)
    */
   if(total >= 8) cout << "Province or ";
   else if (total >= 5) cout << "Duchy or ";
   else if(total >= 2) cout << "Estate or ";

   if(total >= 6) cout << "Gold" << endl;
   else if(total >= 3) cout << "Silver" << endl;
   else cout << "Copper" << endl;
}