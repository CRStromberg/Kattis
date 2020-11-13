#include <iostream> 
#include <iterator> 
#include <map> 
#include <sstream>
#include <queue>

using namespace std;

void insMap(string &input,  map<int, string> &basintr);
void interp(map<int, string> &basintr, map<char, int> &vars, int lineNum);
void letFun(queue <string> &instruct, map<char, int> &vars);
void ifFun(queue <string> &instruct);
void printFun(queue <string> &instruct);
void printLnFun(queue <string> &instruct);

int main() {
    map<int, string> basintr;
    map<char, int> vars;
    string input;
    int lineNum;

   while(getline(cin, input)) {
       insMap(input, basintr);
   }

    lineNum = basintr.begin()->first;
    interp(basintr, vars, lineNum);
    

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

void interp(map<int, string> &basintr, map<char, int> &vars, int lineNum) {
    map<int,string>::iterator it;

    string temp, out;
    queue<string> instruct;
    
    it = basintr.find(lineNum);
    for(it; it != basintr.cend(); ++it) {
        temp = it->second;
    
        stringstream ss(it->second);
        while (ss >> temp) { instruct.push(temp); }

        if(instruct.front() == "LET") {
            instruct.pop();
            letFun(instruct, vars);
        } else if(instruct.front() == "IF") {
            instruct.pop();
            ifFun(instruct);
        } else if(instruct.front() == "PRINT") {
            instruct.pop();
            printFun(instruct);
        } else if(instruct.front() == "PRINTLN") {
            instruct.pop();
            printLnFun(instruct);
        } else { cout << "Error, Not a Command\n Queue front is: "; }
    
    }
}

void letFun(queue <string> &instruct, map<char, int> &vars) {
    map<char,int>::iterator it;
    int finVal, tempVal ;
    char setVarible, varible, op;
    string temp;

    temp = instruct.front();
    if(temp.length() == 1) {
        setVarible = temp[0];
        instruct.pop();
        if(instruct.front() == "=") {
            instruct.pop();
            while(!instruct.empty()) {
                temp = instruct.front();
                if(isdigit(temp[0])) {
                    finVal = stoi(temp);
                    instruct.pop();
                } else {
                    op = temp[0];
                    switch (op)
                    {
                    case '+':
                        instruct.pop();
                        tempVal = stoi(instruct.front());
                        instruct.pop();
                        finVal = finVal + tempVal; 
                        break;
                    case '-':
                        instruct.pop();
                        tempVal = stoi(instruct.front());
                        instruct.pop();
                        finVal = finVal - tempVal;
                        break;
                    case '*':
                        instruct.pop();
                        tempVal = stoi(instruct.front());
                        instruct.pop();
                        finVal = finVal * tempVal;
                        break;
                    case '/':
                        instruct.pop();
                        tempVal = stoi(instruct.front());
                        instruct.pop();
                        finVal = finVal / tempVal;
                        break;
                    default:
                        it = vars.find(op);
                        finVal = it->second;
                        instruct.pop();
                        break;
                    }
                }
            }
        }else cout << "Error, expected '=' sign\n";
    } else cout << "Error, invalid varible name\n";
   it = vars.find(setVarible);
   if(it == vars.end()) { vars.insert({setVarible, finVal}); }
   else it->second = finVal;
}

void ifFun(queue <string> &instruct) {

    while(!instruct.empty()) {
        instruct.pop();
    }
    cout <<"IF\n";
}

void printFun(queue <string> &instruct) {

    while(!instruct.empty()) {
        instruct.pop();
    }
    cout <<"PRINT\n";
}

void printLnFun(queue <string> &instruct) {
    while(!instruct.empty()) {
        instruct.pop();
    }
    cout <<"PRINTLN\n";
}