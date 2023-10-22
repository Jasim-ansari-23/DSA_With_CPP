// Sum two numbers using function

#include <iostream>

using namespace std;

int sum(int a, int b, int c){
    int sumer = a+b+c;
    cout<< sumer;
    return sumer;
}
int main() {
    int a, b, c;
    cin>> a >> b >> c;
    sum(a, b, c);
    return 0;
}

// in another way

#include <iostream>

using namespace std;

int sum(int a, int b, int c){
    int sumer = a+b+c;
    return sumer;
}
int main() {
    cout<< "Sum of - " << sum(5, 8, 0) << endl;
    return 0;
}

// Find maximum number within 3 numbers

#include <iostream>

using namespace std;

void maxi(int num1, int num2, int num3){
    if(num1>=num2 && num1>= num3){
        cout<< "Maximum num is: "<< num1 << endl;
    }
    else if(num2>=num1 && num2>=num3){
        cout<< "Maximum num is: "<< num2 << endl;
    }
    else{
        cout<< "Maximum num is: "<< num3 << endl;
    }
}
int main() {
    int num1, num2, num3;
    cout<< "Enter the 1st num: ";
    cin>> num1;
    cout<< "Enter the 2nd num: ";
    cin>> num2;
    cout<< "Enter the 3rd num: ";
    cin>> num3;
    maxi(num1, num2, num3);
    return 0;
}

// another way

#include <iostream>

using namespace std;

void maxi(int num1, int num2, int num3){
    int maxu = max(num1, num2);
    int final_max = (maxu, num3);
    cout<< "The maximum number: " << final_max << endl;
}
int main() {
    int num1, num2, num3;
    cout<< "Enter the 1st num: ";
    cin>> num1;
    cout<< "Enter the 2nd num: ";
    cin>> num2;
    cout<< "Enter the 3rd num: ";
    cin>> num3;
    maxi(num1, num2, num3);
    return 0;
}

//return the maximum number

#include <iostream>

using namespace std;

int maxiu(int num1, int num2, int num3){
    int maxu = max(num1, num2);
    int final_max = (maxu, num3);
    return final_max;
}
int main() {
    int num1, num2, num3;
    cout<< "Enter the 1st num: ";
    cin>> num1;
    cout<< "Enter the 2nd num: ";
    cin>> num2;
    cout<< "Enter the 3rd num: ";
    cin>> num3;
    int maximum = maxiu(num1, num2, num3);
    cout<< "The maximum number: " << maximum << endl;
    return 0;
}

//Printing num N to 1

#include <iostream>

using namespace std;

void table(int num){
    for(int i = 1; i<=num; i++){
        cout<< i << " ";
    }
}

int main() {
    int num;
    cout<< "Enter the number: ";
    cin>> num;
    table(num);
    return 0;
}

//Printing table

#include <iostream>

using namespace std;

void table(int num){
    for(int i = 1; i<=10; i++){
        cout<< num <<" x "<< i <<" = "<< (num*i) << endl;
    }
}

int main() {
    int num;
    cout<< "Enter the number: ";
    cin>> num;
    table(num);
    return 0;
}

//Check wether it is odd or even

#include <iostream>

using namespace std;

void even_odd(int num){
    if(num%2==0){
        cout<< num <<" - It is a even number";
    }
    else if(num%2==1){
        cout<< num <<" - It is a odd number";
    }
    else{
        cout<< num <<" - It is a negative number";
    }
}

int main() {
    int num;
    cout<< "Enter the number to check wether it odd or even: ";
    cin>> num;
    even_odd(num);
    return 0;
}

//Check wether it is odd or even using bitwise operator

#include <iostream>

using namespace std;

void even_odd(int num){
    if((num&1)==0){
        cout<< num <<" - It is a even number";
    }
    else if((num&1)==1){
        cout<< num <<" - It is a odd number";
    }
    else{
        cout<< num <<" - It is a negative number";
    }
}

int main() {
    int num;
    cout<< "Enter the number to check wether it odd or even: ";
    cin>> num;
    even_odd(num);
    return 0;
}

//Sum of all numbers

#include <iostream>

using namespace std;

void sumer(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum = sum + i;
    }
    cout << "The sum of all numbers from 1 to " << num << " is: " << sum << endl;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    sumer(num);
    return 0;
}

//Sum of all even numbers

#include <iostream>

using namespace std;

void sum_even(int num) {
    int sum = 0;
    for (int i = 2; i <= num; i += 2) {
        sum = sum + i;
    }
    cout << "The sum of all even numbers from 2 to " << num << " is: " << sum << endl;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    sum_even(num);
    return 0;
}

//Check it's prime number or not

#include <iostream>

using namespace std;

bool Check_Prime(int num){
    for(int i = 2; i<num; i++){
        return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    bool prime = Check_Prime(num);
    if(prime){
        cout<< num << " - is a prime number";
    }
    else{
        cout<< num << " - isn't a prime number";
    }
    return 0;
}

//Find the area of circle radius

#include<iostream>

using namespace std;

float find_circle(float radius){
    float area = 3.14*radius*radius;
    return area;
}
int main()
{
    float radius, area;
    cout<< "Enter the size of radius: ";
    cin>> radius;
    area = find_circle(radius);
    cout<< "The area of circle is: "<< area;
    return 0;
}

//Factorial of n

#include <iostream>

using namespace std;

void fact(int num){
    int fact = 1;
    for(int i = 1; i<=num; i++){
        fact = fact*i;
    }
    cout<< "The factorial of - "<< num <<" is: "<< fact;
}

int main() {
    int num;
    cout<< "Enter the number to check wether it odd or even: ";
    cin>> num;
    fact(num);
    return 0;
}

//