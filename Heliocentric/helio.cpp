#include <iostream>
#include <sstream>

using namespace std;

int get_days(int &earth, int &mars);

int main()
{
    string temp;
    int earth, mars;
    int unsigned days[10];
    int j = 0;

    while(getline(cin, temp))
    {
        if (temp.empty()) break;

        stringstream ss(temp);
        ss >> earth >> mars;

        days[j] = get_days(earth, mars);
        j++;
    }

    for(int i = 0; i < j; i++) cout << "Case " << i + 1 << ": " << days[i] << endl;
    return 0;
}

int get_days(int &earth, int &mars)
{
    int unsigned days = 0;

    while(earth != mars)
    {
        if(earth == 364) earth = 0;
        else earth++;
        
        if(mars == 686) mars = 0;
        else mars++;

        days++;
    }
    return days;
}