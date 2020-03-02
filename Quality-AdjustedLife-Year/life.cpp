#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double q, y, ans;

    cin >> n;
    ans = 0;

    for(int i =0; i < n; i++)
    {
        cin >> q >> y;
        ans += (q * y);
    }
    cout << fixed << setprecision(3)<< ans;

    return 0;
}