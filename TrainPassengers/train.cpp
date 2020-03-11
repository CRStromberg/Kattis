#include <iostream>

using namespace std;

void solve(int &n, int &capacity, int &total_capacity, int &on, int &off, int &stay, bool &possible, int count);

int main()
{
    int n, capacity, total_capacity, on, off, stay;
    bool possible = true;

    total_capacity = 0;
    on = 0;
    off = 0;
    stay = 0;

    cin >> capacity >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> off >> on >> stay;
        
        solve(n, capacity, total_capacity, on, off, stay, possible, i);
    }

    if(possible == true) cout << "possible" << endl;
    else cout << "impossible" << endl;

    return 0;
}

void solve(int &n, int &capacity, int &total_capacity, int &on, int &off, int &stay, bool &possible, int count)
{
    int free = capacity - total_capacity - on + off;
    count++;

    if(possible == false) possible = false;
    else
    {
        if (count == 1 && off > 0) possible = false;
        else if(count == n && on > 0) possible = false;
        else if(count == n && stay > 0) possible = false;
        else if(count == n && total_capacity - off !=0) possible = false;
        else if(total_capacity  > capacity) possible = false;
        else if(total_capacity < 0) possible = false;
        else if(free > 0 && stay > 0) possible = false;
        else
        {
            total_capacity = total_capacity + on - off;
            possible = true;
        } 
    }
}