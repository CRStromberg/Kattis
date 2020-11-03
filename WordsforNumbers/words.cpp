#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void parse( string &phrase);
string trans(int num);
void toTens(int &tens, string &tempTens);
void toOnes(int &ones, string &tempOnes);

int main() {
    string phrase;

    while(getline(cin, phrase)) {
        parse(phrase);
        cout << endl;
    }
    

    return 0;
}

void parse( string &phrase) {
    int count = 0;
    string temp, ans;
    stringstream ss(phrase);

    while(ss >> temp) {
        if(!isdigit(temp[0])) cout << temp << " ";
        else {
            int found = stoi(temp);
            ans = trans(found) + " ";
        
            if(count == 0) {
                ans[0] = toupper(ans[0]);
                cout << ans;
            } else cout << ans;
        }
        count++;
    }

}

string trans(int num) {
    int ones, tens;
    string number = "";
    string tempOnes, tempTens;

    ones = num % 10;
    tens = num / 10;

    toTens(tens, tempTens);
    toOnes(ones, tempOnes);
    
    switch (tens)
    {
    case 1:
        switch (ones)
        {
        case 1:
            number = "eleven";
            break;
        case 2:
            number = "twelve";
            break;
        case 3:
            number = "thirteen";
            break;
        case 4:
            number = "forteen";
            break;
        case 5:
            number = "fifteen";
            break;
        case 6:
            number = "sixteen";
            break;
        case 7:
            number = "seventeen";
            break;
        case 8:
            number = "eighteen";
            break;
        case 9:
            number = "nineteen";
            break;
        default:
            number = "ten";
            break;
        }        
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        if(ones == 0) number = tempTens;
        else number = tempTens + "-" + tempOnes;
        break;
    default:
        number += tempOnes;
        break;
    }
    return number;
}

void toTens(int &tens, string &tempTens){
    switch (tens)
    {
    case 1:
        tempTens = "teen";
        break;
    case 2:
        tempTens = "twenty";
        break;
    case 3:
        tempTens = "thrity";
        break;
    case 4:
        tempTens = "forty";
        break;
    case 5:
        tempTens = "fifty";
        break;
    case 6:
        tempTens = "sixty";
        break;
    case 7:
        tempTens = "seventy";
        break;
    case 8:
        tempTens = "eighty";
        break;
    case 9:
        tempTens = "ninety";
        break;
    default:
        tempTens = "zero";
        break;
    }
}

void toOnes(int &ones, string &tempOnes) {
    switch (ones)
    {
    case 1:
        tempOnes = "one";
        break;
    case 2:
        tempOnes = "two";
        break;
    case 3:
        tempOnes = "three";
        break;
    case 4:
        tempOnes = "four";
        break;
    case 5:
        tempOnes = "five";
        break;
    case 6:
        tempOnes = "six";
        break;
    case 7:
        tempOnes = "seven";
        break;
    case 8:
        tempOnes = "eight";
        break;
    case 9:
        tempOnes = "nine";
        break;
    default:
        tempOnes = "zero";
        break;
    }
}
