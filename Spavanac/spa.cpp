#include <iostream>

using namespace std;

int main()
{
    int hour, min;

    cin >> hour >> min;

    min = min - 45;

    if(min < 0)
    {
        min = min + 60;
        hour--;
    }

    if(hour < 0)
    {
        hour = hour + 24;
    }

    if (min ==0)    cout << hour << " " << min << 0;
    else cout << hour << " " << min;

    return 0;
}
