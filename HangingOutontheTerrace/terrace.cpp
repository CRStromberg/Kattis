#include <iostream>
#include <sstream>

using namespace std;

void solve(int &cap, int &ans, string &motion, int &people);

int main()
{
    int cap, n, people, ans;
    string input, motion;
    
    ans = 0;

    cin >> cap >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        getline(cin, input);
        stringstream ss(input);
        ss >> motion >> people;
    
        solve(cap, ans, motion, people);
    }
    cout << ans << endl;
    return 0;
}

void solve(int &cap, int &ans, string &motion, int &people)
{
    if((motion.compare("enter")) == 0 )
    {
        if(cap - people < 0) ans++;
        else cap = cap - people;
    }
    else
    {
        cap = cap + people;
    }
}