#include <iostream>

using namespace std;
/*
read a i
ans = (a*(i-1))+1
*/
int main()
{
    int a, i, ans;

    cin >> a >> i;

    ans = (a * (i - 1)) +1;
    cout << ans;
    return 0;
}