#include <iostream>

using namespace std;

int main()
{
    int n, temp, ans;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        switch(temp)
        {
            case 1:
                ans = 1;
                break;
            case 2:
                ans = 2;
                break;
            case 3:
                ans = 6;
                break;
            case 4:
                ans = 4;
                break;
            case 5:
                ans = 0;
                break;
            case 6:
                ans = 0;
                break;
            case 7:
                ans = 0;
                break;
            case 8:
                ans = 0;
                break;
            case 9:
                ans = 0;
                break;
            default:
            ans = 0;
            break;
        }
        cout << ans << endl;
    }
    return 0;
}