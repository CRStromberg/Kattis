#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string input;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        cout << input.length() << endl;    
    }

    return 0;
}