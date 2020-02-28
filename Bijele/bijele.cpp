#include <iostream>

using namespace std;

int main()
{
    int temp;
    int ans[6];
    int total[6] = {1, 1, 2, 2, 2, 8};

    for(int i = 0; i < 6; i++)
    {
        cin >> temp;
        ans[i] = total[i] - temp;
    }

    for(int j = 0; j < 6; j++) cout << ans[j]<<" ";

    return 0;
}