#include <iostream>

using namespace std;

int main()
{
    int temp, n;
    int unsigned ans = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp < 0) ans++;
    }
    cout << ans;

    return 0;
}