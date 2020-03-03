#include <iostream>

using namespace std;

int main()
{
    int con_num, con_total, total, temp;
    con_total = 0;

    for(int i = 0; i < 5; i++)
    {
        total = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >> temp;
            total += temp;
        }
        if(con_total < total)
        {
            con_total = total;
            con_num = i;
        }
    }
    cout << con_num+1 << " " << con_total << endl;

    return 0;
}