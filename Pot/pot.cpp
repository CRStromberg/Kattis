#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

//Not the most elegant algorithm
//You should be able to do this with mod as well

int main()
{
    int n, j, num, pow_num, total;
    string temp, temp_pow;
    total = 0;

    cin >> n;
    
    for(int i =0; i < n; i++)
    {
        cin >> temp;

        j= temp.length();
        temp_pow = temp[j-1];

        stringstream ss(temp);
        ss >> num;

        stringstream pss(temp_pow);
        pss >> pow_num;

        num = num/10;

        total += pow(num, pow_num);
    }

    cout << total <<endl;

    return 0;
}