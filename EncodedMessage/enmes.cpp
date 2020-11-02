#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n, code, inc, loop;
    string input, ans;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        ans = "";
        cin >> input;
        code = sqrt(input.length());
   
        loop = code;
        for(int j = 0; j < loop; j++)
        {
            inc = code - (j+1);
            ans += input[inc];
            for(int k = 2; k <= loop; k++)
            {
                inc = inc + code;

                ans += input[inc];
            }
        }
        cout << ans << endl;
    }
    return 0;
}