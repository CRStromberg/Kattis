#include <iostream>

using namespace std;

int main()
{
    double dis, a;
    int ans;
    a = 1000.0 * 5280.0/4854.0;

    cin >> dis;

    ans = (dis * a) + .5;
    cout << ans << endl;
    
    return 0;
}