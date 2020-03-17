#include <iostream>
#include <cmath>

using namespace std;

double get_rad(int &v);

int main()
{
    int h, v, ans;
    double rad;
    cin >> h >> v;

    rad = get_rad(v);

    ans = ceil(h/sin(rad));
    cout << ans << endl;    

    return 0;
}

double get_rad(int &v)
{
    return v * (3.14159265359/180.0);
}