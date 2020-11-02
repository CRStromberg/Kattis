#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void parse( string &phrase);
string trans(int num);
void toTens(int &tens, string &tempTens);
void toOnes(int &ones, string &tempOnes);
bool isInt(string &temp);

int main() {
    string phrase;

    cin >> phrase;
    

    return 0;
}

void parse( string &phrase) {
    string temp;
    stringstream ss(phrase);

    while(ss >> temp) {
        if(!isInt(temp)) cout << temp << " ";
        else {
            int found = stoi(temp);
            cout << trans(found) << " ";
        }
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
        number = tempTens + tempOnes;
        break;
    default:
        number += tempOnes;
        break;
    }

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

bool isInt(string &temp) {
    const_iterator it = temp.begin();
    while (it != temp.end() && std::isdigit(*it)) ++it;
    return !temp.empty() && it == temp.end();
}