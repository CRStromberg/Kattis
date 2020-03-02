#include <iostream>
#include <iomanip>

using namespace std;
/*
read n
read b p
ans1 = ans2 - 60/p
ans2 = (60/p)*b
ans3 = ans2 + 60/p
*/

int main()
{
    int n;
    double b, p, ans1, ans2, ans3;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> b >> p;
        ans2 = (60/p)*b;
        ans1 = ans2 - (60/p);
        ans3 = ans2 + (60/p);
        cout << fixed << setprecision(4)<< ans1 << " " << fixed << setprecision(4)<< ans2 << " " << 
        fixed << setprecision(4)<< ans3 << endl;
    }

    return 0;
}