#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, k, base, num, ans;

    cin >> n;

    for(int i = 0; i < n; i++)
    {   
        ans = 0;
        cin >> k >> base >> num;
        
        while (num > 0)
        {
            ans += pow(num%base, 2);
            num = num/base;
        }
        cout << k << ' ' << ans << endl;
    }
    return 0;
}