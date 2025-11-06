#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <stdexcept> 
using namespace std;

map<char, int> var;
int get_value(const string& str) {
    if (str.empty()) return 0;

    if (str[0] >= 'A' && str[0] <= 'Z') {
        if (var.find(str[0]) == var.end()) {
            throw runtime_error("Variable not initialized: " + str);
        }
        return var[str[0]];
    } else {
        return stoi(str);
    }
}

bool evalCondition(const string& s1, const string& op, const string& s2) {
    int val1 = get_value(s1);
    int val2 = get_value(s2);

    if (op=="=="){
        return val1 == val2;
    }
    if(op=="!="){
        return val1 != val2;
    }
    if(op=="<"){
        return val1 < val2;
    }
    if (op==">"){
        return val1 > val2;
    }
    return false;
}

void executeCode(int& pc, const vector<string>& code);

void skipBlock(int& pc, const vector<string>& code) {
    int deapth = 1;
    while (pc < code.size()) {
        stringstream ss(code[pc]);
        string comm;
        ss >> comm;
        if (comm=="if"||comm=="for") {
            deapth++;
        } else if (comm=="end"){
            deapth--;
            if(deapth==0){
                return;
            }
        } else if (comm=="No" && deapth==1) {
            return;
        }
        pc++;
    }
}

void executeCode(int& pc, const vector<string>& code) {
    while (pc < code.size()) {
        stringstream ss(code[pc]);
        string comm;
        ss >> comm;
        if (comm=="if") {
            string s1,op,s2;
            ss>>s1>>op>>s2;
            bool cond=evalCondition(s1, op, s2);
            pc++;
            pc++;
            if (cond) {
                executeCode(pc, code);
                if (pc < code.size() && code[pc] == "No") {
                    pc++; 
                    skipBlock(pc, code);
                }
            } else {
                skipBlock(pc, code);
                
                if (pc < code.size() && code[pc] == "No") {
                    pc++; 
                    executeCode(pc, code); 
                }
            }
            
            pc++; 
            continue;

        } else if (comm=="for") {
            char iterVar;
            string st_str, end_str;
            ss >> iterVar >> st_str >> end_str;

            int stVal = get_value(st_str);
            int end_val = get_value(end_str);
            int loopStartpc = pc + 1;

            for (int i = stVal; i <= end_val; ++i) {
                var[iterVar] = i;
                pc = loopStartpc;
                executeCode(pc, code);
            }
            pc = loopStartpc;
            skipBlock(pc, code);
            pc++; 
            continue;

        } else if (comm == "print") {
            string val_str;
            ss >> val_str;
            cout << get_value(val_str) << endl;
            pc++;
            continue;

        } else if (comm == "end" || comm == "No") {
            return;
        
        } else {
            pc++;
        }
    }
}

int main() {
    vector<string> arr;
    string ans;
    while (getline(cin, ans)) {
        if (!ans.empty()) {
            arr.push_back(ans);
        }
    }
    string valLine = arr.back();
    arr.pop_back();

    string nameLine = arr.back();
    arr.pop_back();

    vector<string> code = arr;
    stringstream ss_names(nameLine);
    stringstream ss_values(valLine);
    
    char var_name;
    int var_value;
    while (ss_names >> var_name && ss_values >> var_value) {
        var[var_name] = var_value;
    }

    int pCount = 0; 
    executeCode(pCount,code);

    return 0;
}