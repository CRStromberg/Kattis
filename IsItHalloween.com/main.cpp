#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    char user[3];
    int date;
    
    cin >> user >> date;

    if( strcmp(user ,"DEC") == 0 && date == 25 || strcmp(user, "OCT") == 0 && date == 31) cout << "yup";
    else cout << "nope";

    return 0;
}