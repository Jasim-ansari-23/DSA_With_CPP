#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string s) {
    string temp = "";
    int current_Element = 0;
    while (current_Element < s.length()) {
        if (temp.length() > 0 && temp[temp.length() - 1] == s[current_Element]){
            temp.pop_back();
        }
        else{
            temp.push_back(s[current_Element]);
        }
        current_Element++;
    }
    return temp;
}

int main() {
    string s = "azxxzy";
    string result = removeDuplicates(s);
    cout << "Original string: " << s << endl;
    cout << "String after removing adjacent duplicates: " << result << endl;
    return 0;
}