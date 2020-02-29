#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string input, ans;   
    
    cin >> input;
    istringstream ss(input);

    while(getline(ss, ans, '-')) 
    {
        cout << ans[0];
    }
}