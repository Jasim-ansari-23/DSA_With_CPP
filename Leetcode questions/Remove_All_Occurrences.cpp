#include<iostream>
#include<string>
using namespace std;

string Remove_Occurrences(string s, string part){
    while(s.find(part) != string::npos){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";
    string removed = Remove_Occurrences(s, part);
    cout<< "After removing the all occurrence: "<< removed << endl;
    return 0;
}