#include <iostream>
#include <string>

using namespace std;

int main()
{
    string doc, jon;

    cin >> jon;
    cin >> doc;

    if(jon.length() < doc.length()) cout << "no" << endl;
    else cout << "go" << endl;

    return 0;
}