#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void remove_word(vector <string> &noises, string strm);

int main()
{
    vector <string> noises;
    string input, temp, temp_noise[3];
    int cases;

    cin >> cases;
    cin.ignore();
    
    for(int i = 0; i < cases; i++)
    {
        noises.clear();
        input = " ";

        getline(cin, input);
int n = 0;
        stringstream ss(input);
        while(ss)
        {
            n++;
            ss >> temp;
            noises.push_back(temp);
        }

        while(input.compare("what does the fox say?") != 0)
        {
            getline(cin, input);

            stringstream ns(input);
            ns >> temp_noise[0] >> temp_noise[1] >> temp_noise[2];

            remove_word(noises, temp_noise[2]);
        }
        
        cout << n << endl;
        for (int i = 0; i < noises.size(); i++) cout << noises.at(i) << ' ';
        cout << endl;
    }

    return 0;
}

void remove_word(vector <string> &noises, string strm)
{
    remove(noises.begin(), noises.end(), strm);
}