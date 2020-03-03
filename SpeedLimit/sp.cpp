#include <iostream>

using namespace std;

int main()
{
    int n, s, t, total, temp;

    do
    {
        total = 0;
        temp = 0;
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> s >> t;
            total += s * (t - temp);
            temp = t;
        }
        if(n != -1) cout << total <<" miles\n";
    } while (n!=-1);
    
    return 0;
}