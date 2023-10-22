// strings first code

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cout<< "Enter your full name: ";
    getline(cin, name); // it is used for taking full input
    cout<< "Your name is: "<< name;
    return 0;
}

//size of strings 

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   string name;
   cout<< "Enter your full name: ";
   getline(cin, name);
   cout<< "Your full name is: "<< name << endl;
   cout<< "Your full name's size is: "<< name.length() << endl;
   return 0;
}

//Print string index wise

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string name;
    cout<< "Enter your name: ";
    getline(cin, name);
    int index = 0;
    while(name[index] != '\0'){
        cout<< "The character "<< name[index] << " - is at index - " << index << endl;
        index++;
    }
    // cout<< "Your full name is: "<< name << endl;
    return 0;
}

//Access the string and append it

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string str1 = "Jasim ";
    string str2 = "Ansari";
    cout<< "Before appending"<< endl;
    cout<< str1 << endl;
    cout<< str2 << endl;
    cout<< "After appending" << endl;
    str1.append(str2);
    cout<< str1 << endl;
    // Access string 
    cout<< str1.at(0) << endl;
    cout<< str1.front() << endl;
    cout<< str1.back() << endl;
    return 0;
}

//Append something, means add something between strings

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string name = "Mohammad Ansari";
    string mid = "Jasim ";
    name.insert(9, mid);
    cout<< name;
    return 0;
}

//Remove and add elements 

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string name = "Jasim ";
    name.push_back('A');
    cout<< name<< endl;
    name.pop_back();
    cout<< name << endl;
    return 0;
}

//Search string inside another string

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string name = "Jasim Ansari";
    string name2 = "Ansari";
    if(name.find(name2) == string::npos){
        cout << name2 << " not found inside the string: " << name << endl;
    }else{
        cout<< name <<" - found inside the string 1";
    }
    return 0;
}

//Compare string 

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string num = "Jasim";
    string num2 = "Jasim";
    if(num.compare(num2) == 0){
        cout<< "Matching element";
    }
    else{
        cout<< "Doesn't matching";
    }
    return 0;
}

//Find the string and print it

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string num = "This is the car, daddy of all suvs";
    // int index = 0;
    // while(num[index] != '\0'){
    //     cout<< "The character: "<< num[index] <<" is availble at index "<< index << endl;
    //     index++;
    // }
    cout<< num.substr(17, 5);
    return 0;
}

//Check the string is palindrome

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

bool checkPalindrome(string s){
    int left = 0, right = s.length() - 1, index = 0;
    while(left<right){
        if(s[left] != s[right]){
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true;
}
int main()
{
    string s = "aba";
    bool ans = checkPalindrome(s);
    if(ans){
        cout<< s << ": is palindrome" << endl;
    }
    else{
        cout<< "Not a palindrome";
    }
    return 0;
}

//