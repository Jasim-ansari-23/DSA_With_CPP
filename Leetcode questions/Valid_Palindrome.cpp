#include<bits/stdc++.h>
#include<string.h>
using namespace std;

bool check_Palindrome(string s, int start, int end){
    while(start <= end){
        if(s[start] != s[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

bool valid_Palindrome(string s, int start, int end){
    start = 0; 
    end = s.length() - 1;
    while(start < end){
        if(s[start] == s[end]){
            start++;
            end--;
        }
        else{
            bool answer = check_Palindrome(s, start+1, end);
            bool answer2 = check_Palindrome(s, start, end-1);
            return answer || answer2;
        }
    }
    return true;
}

int main(){
    string s = "ABCRRRCA";
    int start = 0, end = s.length() - 1;

    bool isPalindrome = check_Palindrome(s, start, end);
    // cout << "Is the string a palindrome? " << (isPalindrome ? "Yes" : "No") << endl;
    if(isPalindrome){
        cout<< "This is the Palindrome: "<< s << endl;
    }
    else{
        cout<< "Not a Palindrome: "<< s << endl;
    }

    bool isValidPalindrome = valid_Palindrome(s, start, end);
    // cout << "Is the string a valid palindrome? " << (isValidPalindrome ? "Yes" : "No") << endl;
    if(isValidPalindrome){
        cout<< "This is a valid Palindrome after correcting: "<< s << endl;
    }
    else{
        cout<< "Not a Valid Palindrome" << endl;
    }
    return 0;
}