#include <iostream>
#include <cmath>

using namespace std;
/*
(2^turn +1)^2
*/
int main()
{
    int turn;
    int long unsigned ans;
    cin >> turn;

    ans = pow((pow(2, turn)+1), 2);
    cout << ans;

    return 0;
}