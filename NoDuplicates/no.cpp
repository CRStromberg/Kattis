#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <string> words;
    string str, temp;
    getline(cin, str);

    stringstream ss(str);

    for(string str; ss >> str;)
    {
        words.push_back(str);
    }
    sort(words.begin(), words.end());

    for (int i = 1; i<words.size(); i++) 
    {
        if (words[i-1] == words[i]) 
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}