#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, inc;
    string in_one, in_two;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> in_one >> in_two;
        inc = in_one.length();
        
        cout << in_one << endl << in_two << endl;

        for(int j = 0; j < inc; j++)
        {
            if(in_one[j] == in_two[j]) cout << '.';
            else cout << '*';
        }
        cout << endl << endl;
    }

    return 0;
}