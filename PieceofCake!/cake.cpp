#include <iostream>

using namespace std;

int main()
{
    int n, h, v, ans;

    cin >> n >> h >> v;

    if(n-h < h)
    {
        if(n-v < v) ans = 4*h*v;
        else ans = 4*h*(n-v);
    }
    else
        if(n-v < v) ans = 4*(n-h)*v;
        else ans = 4*(n-h)*(n-v);

    cout << ans << endl;

    return 0;
}