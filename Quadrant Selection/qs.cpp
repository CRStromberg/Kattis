#include <iostream>

using namespace std;

/* 
x y in
xy=1
-xy=2
-x-y=3
x-y=4
*/

int main ()
{
    int x, y;

    cin >> x;
    cin >> y;

    if( x > 0 && y > 0) cout << 1;
    else if( x < 0 && y > 0) cout << 2;
    else if( x < 0 && y < 0) cout << 3;
    else cout << 4;
    
    return 0;
}