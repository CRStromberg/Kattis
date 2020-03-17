#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <string> schools;
    string input, school, team, trash;
    int n, count;
    
    count = 0;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        getline(cin, input);

        if(count < 12)
        {
            stringstream ss(input);
            ss >> school >> team;

            if(find(schools.begin(), schools.end(), school) != schools.end()) trash = school;
            else
            {
                cout << input << endl;
                schools.push_back(school);
                count++;
            }
        }
    }
    return 0;
}