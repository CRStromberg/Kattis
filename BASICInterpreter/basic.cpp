#include <iostream> 
#include <iterator> 
#include <map> 
#include <sstream>

using namespace std;

void insMap(string &input,  map<int, string> &basintr);
void interp(map<int, string> &basintr, map<char, int> &vars, int key);

int main() {
    map<int, string> basintr;
    map<char, int> vars;
    string input;
    int key;

   while(getline(cin, input)) {
       insMap(input, basintr);
   }

    key = basintr.begin()->first;
    interp(basintr, vars, key);
    

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

void interp(map<int, string> &basintr, map<char, int> &vars, int key) {
    map<int,string>::iterator it;
    string temp, out;
    string instr[100];
    
    it = basintr.find(key);
    for(it; it != basintr.cend(); ++it) {
        int count = 0;
        temp = it->second;
    
        stringstream ss(it->second);
        while (ss >> temp)
        {
            instr[count] = temp;
            count ++;
        }

        if(instr[0] == "LET") {
           

        } else if(instr[0] == "IF") {
            cout << "IF CHRIS\n";

        } else if(instr[0] == "PRINT") {
            cout << "PRINT CHRIS\n";

        } else if(instr[0] == "PRINTL") {
            out = "";

            cout << "PRINTL CHRIS\n";

        } else cout << "Error, Not a Command\n";
        
    
    }
}