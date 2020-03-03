#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int statues;
    
    cin >> statues;

    statues = ceil(log2(statues));
    statues++;

    cout << statues << endl;

    return 0;
}