// Character array first code

#include<iostream>
using namespace std;

int main()
{
    char ch[2];
    cout<< "Enter the character of index: " << ch << endl;
    cin>> ch[0];
    cout<< "Printing the character: " << ch << endl;
    return 0;
}

// Changing the char data type into integer explicitly

#include<iostream>
using namespace std;

int main()
{
    char ch[2];
    cout<< "Enter the character of index: " << ch << endl;
    char temp = ch[0];
    int value = (int)temp;
    cout<< value;
    return 0;
}

//taking full input from user

#include<iostream>
using namespace std;

int main()
{
    char name[100];
    cout<< "Enter your full name: ";
    cin.getline(name, 100); // it is used for taking full input
    cout<< "Your name is: "<< name;
    return 0;
}

// Check length 

#include<iostream>
using namespace std;

int find_length(char name[], int size){
    int len = 0;
    for(int i = 0; i<size; i++){
        if(name[i]=='\0'){
            break;
        }
        else{
            len++;
        }
    }
    return len;
}
int main()
{
    char name[100];
    cout<< "Enter your full name: ";
    // cin.getline(name, 100); // while using this, will count spaces
    cin>> name;
    cout<< "Your name is: "<< name << endl;
    int len = find_length(name, 100);
    cout<< "Character length is: "<< len << endl;
    return 0;
}

//check length with inbuilt function

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char name[100];
    cout<< "Enter your full name: ";
    cin.getline(name, 100);
    cout<< "Your name is: "<< name << endl;
    cout<< "Character length is: "<< strlen(name) << endl; //strl is used to count length of strings
    return 0;
}

//Reversing the array using two pointer approach

#include <iostream>
#include <string.h>
using namespace std;

void Reverse_String(char ch[], int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        swap(ch[left], ch[right]);
        left++;
        right--;
    }
}

int main() {
   char ch[100];
   cout << "Enter your full name: ";
   cin.getline(ch, 100);
   int length = strlen(ch); 
   Reverse_String(ch, length);
   cout << "After reversing the character: " << ch <<
   endl;
   return 0;
}

//inbuilt function for reversing an charater array

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
   char ch[100];
   cout<< "ENter the character: ";
   cin.getline(ch, 100); 
   int length = strlen(ch); // it is used to calculate array length
   reverse(ch, ch + length); // It is used to reverse an array
   cout << "Reversed string: " << ch << endl;
   return 0;
}

// Convert any character from lowercase to Upper case

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

void convertUppercase(char ch[], int size){
   int index = 0;
   while(ch[index] != '\0'){
      char currcharactor = ch[index];
      if(currcharactor >= 'a' && currcharactor <= 'z'){
         ch[index] = currcharactor - 'a' + 'A';
      }
      index++;
   }
}
int main() {
   char ch[100];
   cout<< "ENter the character: ";
   cin.getline(ch, 100);
   convertUppercase(ch, 100);
   cout<< "Your full name is: "<< ch << endl;
   return 0;
}

//Convert any character from Upper case to lower case

#include <iostream>
#include <string.h>
using namespace std;

void convertUppercase(char ch[], int size){
   int index = 0;
   while(ch[index] != '\0'){
      char currcharactor = ch[index];
      if(currcharactor >= 'A' && currcharactor <= 'Z'){
         ch[index] = currcharactor - 'A' + 'a';
      }
      index++;
   }
}

// void convertUppercase(char ch[], int size){
//    int index = 0;
//    while(ch[index] != '\0'){
//       if(ch[index] >= 'A' && ch[index] <= 'Z'){
//          ch[index] = ch[index] - 'A' + 'a';
//       }
//       index++;
//    }
// }

int main() {
   char ch[100];
   cout<< "ENter the character: ";
   cin.getline(ch, 100);
   convertUppercase(ch, 100);
   cout<< "Your full name is: "<< ch << endl;
   return 0;
}

//Inbuilt function for converting it's lowe to upper case

#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

void ConvertToUpperCase(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length; ++i) {
        str[i] = toupper(str[i]);
    }
}
int main() {
    char ch[] = "hello, world!";
    cout << "Original string: " << ch << endl;
    ConvertToUpperCase(ch);
    cout << "Uppercase string: " << ch << endl;
    return 0;
}

//Remove (@) from an program

#include<iostream>
#include<string.h>
using namespace std;

void spacial_case(char ch[], int size){
   int index = 0;
   while(ch[index] != '\0'){
      char current_index = ch[index];
      if(current_index == '@'){
         ch[index] = ' ';
      }
      index++;
   }
}
int main()
{
   char ch[100];
   cout<< "Enter the string: ";
   cin.getline(ch, 100);
   spacial_case(ch, 100);
   cout<< "After removing the spacial character: "<< ch << endl;
   return 0;
}

//Check the string is palindrome or not

#include<iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char ch[], int size){
   int left = 0, right = size - 1;
   while(left <= right){
      if(ch[left] == ch[right]){
         left++;
         right--;
      }
      else{
         return false;
      }
   }
   return true;
}
int main()
{
   char ch[100];
   cout<< "Enter the string: ";
   cin.getline(ch, 100);
   int length = strlen(ch);
   bool is_Palind = isPalindrome(ch, length);
   if(is_Palind){
      cout<< "This is palindrome: "<< ch << endl;
   }else{
      cout<< ch <<", it is not palindrome";
   }
   return 0;
}

// 