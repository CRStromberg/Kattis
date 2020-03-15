#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int temp;
    vector <int> ans;
    vector<int>::iterator it;

    for(int i = 0; i < 10; i ++)
    {
        cin >> temp;
        temp = temp % 42;
        it = find(ans.begin(), ans.end(), temp); 
        if (it == ans.end()) ans.push_back(temp);
    }
    cout << ans.size() << endl;

    return 0;
}