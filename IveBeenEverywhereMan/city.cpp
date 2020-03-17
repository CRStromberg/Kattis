#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, total;
    string input;
    vector <string> cities;

    cin >> t;

    for(int j = 0; j < t; j++)
    {
        cin >> n;
        total = n;
        for(int i = 0; i < n; i ++)
        {
            cin >> input;
            if (find(cities.begin(), cities.end(), input) != cities.end())
            {
                total--;
            }
            cities.push_back(input);
        }
        cout << total << endl;
        cities.clear();
    }
    return 0;

}