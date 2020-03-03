#include <iostream>

using namespace std;

int ans(int temp);


int main()
{
    int l, d, x, temp;

    cin >> l;
    cin >> d;
    cin >> x;

    //Start at low point and inc up to high point
    for(int i = l; i <= d; i++)
    {
        temp = ans(i);
        if(temp == x)
        {
            cout << i << endl;
            break;
        }
    }

    //Start at high point and inc down to low point
    for(int j = d; j >= l; j--)
    {
        temp = ans(j);
        if(temp == x)
        {
            cout << j << endl;
            break;
        }
    } 

    return 0;
}

// Add digits of number up
int ans(int temp)
{
    int dig, ans;
    ans = 0;

    while(temp != 0)
    {
        dig = temp % 10;
        temp = temp / 10;
        ans += dig;
    }
    return ans;
}
