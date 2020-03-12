#include <iostream>
#include <iomanip>

using namespace std;
/*
    in n, p, k
    in t n times
    ans = from 0 to t1
    ans = ans + [(t2-t1)*(1 + p/100)] + [(t3-t2)*(1 + 2p/100)]...
*/
int main()
{
    double n, p, k, t, pt, temp, ans, new_p;
    pt = 0;
    ans = 0;

    cin >> n >> p >> k;

    for(int i = 0; i <= n; i++)
    {
        new_p = 1 + (i*p/100);
        if(i<n)
        {
            cin >> t;
            temp = t - pt;
            ans = ans + (temp * new_p);
            pt = t;
            k = k - temp;
        }            
        else ans = ans + (k * new_p);
    }
    cout << fixed << setprecision(6) << ans << endl;

    return 0;
}