#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    double n, bat, avg, navg;
    string temp, n_temp;

    getline(cin, n_temp);    
    getline(cin, temp);

    stringstream nint(n_temp);
    nint >> n;
    
    navg = n;
    avg = 0;

    stringstream sint(temp);
    
    while(n > 0)
    { 
        sint >> bat;

        if(bat < 0) navg--;
        else avg += bat;
        n--;
    }
    cout << avg/navg <<endl;

    return 0;
}