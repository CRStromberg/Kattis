#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int a, b;
    string in_a, in_b, temp_a, temp_b;

    cin >> in_a >> in_b;

    temp_a = "";
    temp_b = "";
    for(int i = 2; i >= 0; i--)
    {
        temp_a += in_a[i];
        temp_b += in_b[i];
    }

    stringstream ssa(temp_a);
    stringstream ssb(temp_b);

    ssa >> a;
    ssb >> b;

    if(a < b) cout << b;
    else cout << a;

    return 0;
}