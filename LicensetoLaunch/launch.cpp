#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, temp, ans;
    vector <int> days;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        days.push_back(temp);
    }
    ans = 0;

    for(int j = 0; j < days.size(); j++) if(days[j] < days[ans]) ans = j;

    cout << ans << endl;
    return 0;
}