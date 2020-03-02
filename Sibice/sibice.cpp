#include <iostream>
#include <cmath>

using namespace std;

// sqrt(pow(w, 2)+ pow(h, 2))

int main()
{
    int n, w, h, l;
    double temp;

    cin >> n >> w >> h;
    temp = sqrt(pow(w, 2) + pow(h, 2));

    for(int i =0; i < n; i++)
    {
        cin >> l;
        if(l<=temp) cout <<"DA\n";
        else cout << "NE\n";
    }
    return 0;
}