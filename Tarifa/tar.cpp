#include <iostream>

using namespace std;

/*
X = megs avail
N = months
P = megs used
*/
int main()
{
    int x, n, p, ans, temp;

    cin >> x;
    cin >> n;

    p = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        p += temp;
    }

    ans = (x * (n + 1)) - p;
    cout << ans;
    return 0;
}