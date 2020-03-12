#include <iostream>
#include <cmath>

using namespace std;

double degrees(double deg, double pi);
double solve(double g, double x, double v, double rad);
void ans(double y, double h1, double h2);

int main()
{
    double x, y, v, t, deg, rad, h1, h2, g, pi;
    int n;
    
    g = 9.81;
    pi = 3.14159265359;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> v >> deg >> x >> h1 >> h2;
        rad = degrees(deg, pi);
        y = solve(g, x, v, rad);
        ans(y, h1, h2); 
    }
    return 0;
}

double degrees(double deg, double pi)
{
    return deg * (pi/180);
}

double solve(double g, double x, double v, double rad)
{
    //y=-(gx^2)/(2(vcostheta)^2)+xtantheta
    double a, b, c, d, e, ans;

    a = g*pow(x,2);
    b = v*cos(rad);
    c = 2*pow(b,2);
    d = a/c;
    e = x*tan(rad);
    ans = e - d;

    return ans;
}

void ans(double y, double h1, double h2)
{
    double ans_low, ans_high;

    ans_low = y - (h1 + 1);
    ans_high = h2 - (y + 1);
    
    if(ans_low > 0 && ans_high > 0) cout << "Safe" << endl;
    else cout << "Not Safe" << endl;
}