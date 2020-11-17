#include <iostream> 
#include <iterator> 
#include <map> 
#include <sstream>
#include <queue>

using namespace std;

void insMap(string &input,  map<int, string> &basintr);
void interp(map<int, string> &basintr, map<char, int> &vars, int lineNum, string &message);
void letFun(queue <string> &instruct, map<char, int> &vars);
int ifFun(queue <string> &instruct, map<char, int> &vars);
void printFun(queue <string> &instruct, map<char, int> &vars, string &message);
void printLnFun(queue <string> &instruct, map<char, int> &vars, string &message);

int main() {
    map<int, string> basintr;
    map<char, int> vars;
    string input, message;
    int lineNum;

    while(getline(cin, input)) {
       insMap(input, basintr);
    }

    lineNum = basintr.begin()->first;
    interp(basintr, vars, lineNum, message);
    

    return 0;
}

void insMap(string &input, map<int, string> &basintr) {
   
   int line;
   string temp;
   string code = "";
   
   stringstream ss(input);

    ss >> line;
    while(ss >> temp) {
        code = code + temp + " ";
    }
   
    basintr.insert({line, code});

}

void interp(map<int, string> &basintr, map<char, int> &vars, int lineNum, string &message) {
    map<int,string>::iterator it;
    int jump;
    string temp, out;
    queue<string> instruct;
    
    it = basintr.find(lineNum);
    for(it; it != basintr.cend(); ++it) {
        temp = it->second;
        
        
        if(basintr.empty()) { break; }

        stringstream ss(it->second);
        while (ss >> temp) { instruct.push(temp); }

        if(instruct.front() == "LET") {
            instruct.pop();
            letFun(instruct, vars);
        } else if(instruct.front() == "IF") {
            instruct.pop();
            jump = ifFun(instruct, vars);

            if(jump >= 0) { 
                interp(basintr, vars, jump, message); 
                basintr.erase(basintr.begin(), basintr.end());    
            }
        } else if(instruct.front() == "PRINT") {
            instruct.pop();
            printFun(instruct, vars, message);
        } else if(instruct.front() == "PRINTLN") {
            instruct.pop();
            printLnFun(instruct, vars, message);
        } else { cout << "Error, Not a Command\n Queue front is: "; }

        
    }
}

void letFun(queue <string> &instruct, map<char, int> &vars) {
    map<char,int>::iterator it;
    int valOne, valTwo, operation, finVal;
    char setVarible, varible, op;
    string temp;

    temp = instruct.front();
    if(temp.length() == 1) {
        setVarible = temp[0];
        instruct.pop();
        if(instruct.front() == "=") {
            instruct.pop();
            temp = instruct.front();

            if(isdigit(temp[0])) { valOne = stoi(temp); }
            else {
                it = vars.find(temp[0]);
                valOne = it -> second;
            }
            instruct.pop();

            if(!instruct.empty()) {
                temp = instruct.front();
                op = temp[0];

                switch(op) {
                    case '+':
                        operation = 1;
                        break;
                    case '-':
                        operation = 2;
                        break;
                    case '*':
                        operation = 3;
                        break;
                    case '/':
                        operation = 4;
                        break;
                    default:
                        cout << "Error, invalid operation\n";
                        break;
                }
                instruct.pop();
                temp = instruct.front();
                
                if(isdigit(temp[0])) { valTwo = stoi(temp); }
                else {
                    it = vars.find(temp[0]);
                    valTwo = it -> second;
                }
                instruct.pop();
            }
            switch (operation)
            {
            case 1:
                finVal = valOne + valTwo;
                break;
            case 2:
                finVal = valOne - valTwo;
                break;
            case 3:
                finVal = valOne * valTwo;
                break;
            case 4:
                finVal = valOne / valTwo;
                break;
            default:
                finVal = valOne;
                break;
            }

        }else cout << "Error, expected '=' sign\n";
    } else cout << "Error, invalid varible name\n";
   it = vars.find(setVarible);
   if(it == vars.end()) { vars.insert({setVarible, finVal}); }
   else it->second = finVal;
}

int ifFun(queue <string> &instruct, map<char, int> &vars) {
    map<char,int>::iterator it;
    string temp;
    int firNum, secNum, lineNum, condition, jump;
    
    
    temp = instruct.front();
    instruct.pop();

    if(isdigit(temp[0])) { firNum = stoi(temp); }
    else {
        it = vars.find(temp[0]);
        firNum = it->second;
    }
    temp = instruct.front();
    instruct.pop();
    
    if(temp[0] == '=') { condition = 3; } 
    else if(temp[0] == '<') {
        if(temp.length() == 2) {
            if(temp[1] == '=') { condition = 4; }
            else if (temp[1] == '>') { condition = 6; }
        } else { condition = 1; }   
    } else if(temp[0] == '>') {
        if(temp.length() == 2) { condition = 5; }
        else { condition = 2; }
    } else { cout << "Error, Invalid Condition\n"; }

    temp = instruct.front();
    instruct.pop();

    if(isdigit(temp[0])) { secNum = stoi(temp); }
    else {
        it = vars.find(temp[0]);
        secNum = it->second;
    }

    instruct.pop();
    instruct.pop();
    lineNum = stoi(instruct.front());
    instruct.pop();

    jump = -11;
    switch (condition)
    {
        /*
        <   1
        >   2
        =   3
        <=  4
        >=  5
        <>  6
    */
    case 1:
        if(firNum < secNum) { jump = lineNum; }
        break;
    case 2:
        if(firNum > secNum) { jump = lineNum; }
        break;
    case 3:
        if(firNum == secNum) { jump = lineNum; }
        break;
    case 4:
        if(firNum <= secNum) { jump = lineNum; }
        break;
    case 5:
        if(firNum >= secNum) { jump = lineNum; }
        break;
    case 6:
        if(firNum != secNum) { jump = lineNum; }
        break;
    default:
        break;
    }

    return jump;    
}

void printFun(queue <string> &instruct, map<char, int> &vars, string &message) {
    map<char,int>::iterator it;
    string temp;
    bool quo = false;

    while(!instruct.empty()) {
        temp = instruct.front(); 
        instruct.pop();

        if(temp.length() == 1 && temp[0] == '"' && instruct.size() > 1) { 
            temp = instruct.front();
            instruct.pop();
            quo = true;
        }

        if(temp.length() == 1 && quo == false) {
            it = vars.find(temp[0]);
            message = message + to_string(it->second) + " ";    
        } else {
            if(temp[0] == '"') {
                quo = true;
                temp.erase(0, 1);
                if(temp[temp.length()-1] == '"') {
                    temp.erase(temp.length()-1, 1);
                    quo = false;
                }
            }else if(temp[temp.length()-1] == '"') {
                temp.erase(temp.length()-1, 1);
                quo = false;
            }
            message = message + temp + " ";
        }   
    }
    
}

void printLnFun(queue <string> &instruct, map<char, int> &vars, string &message) {
    
    if(!instruct.empty()) { printFun(instruct, vars, message); }


    cout << message << endl;
    message.erase();
}