#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double c, l, w, total;

    cin >> c;
    cin >> n;

    total = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> l >> w;
        total += l * w;
    }
    total = total * c;

    cout << fixed << setprecision(7) << total << endl;
    return 0;
}