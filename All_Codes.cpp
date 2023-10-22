//Check all variables bits

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i;
    float f;
    double d;
    char c;
    long l;
    long long ll;
    long double ld;
    short s;
    bool b;
    cout<< "The size of an Boolean (" << sizeof(b) << ") Byte" << endl;
    cout<< "The size of an Integer (" << sizeof(i) << ") Bytes" << endl;
    cout<< "The size of an Float (" << sizeof(f) << ") Bytes" << endl;
    cout<< "The size of an Double Float (" << sizeof(d) << ") Bytes" << endl;
    cout<< "The size of an Char (" << sizeof(c) << ") Byte" << endl;
    cout<< "The size of an Long Integer (" << sizeof(l) << ") Bytes" << endl;
    cout<< "The size of an Longest integer (" << sizeof(ll) << ") Bytes" << endl;
    cout<< "The size of an Long Int and Float (" << sizeof(ld) << ") Bytes" << endl;
    cout<< "The size of an Short (" << sizeof(s) << ") Bytes" << endl;
    return 0;
}

//convert any variable into another variable

#include<bits/stdc++.h>

using namespace std;
int main()
{
    double d = 5.7;
    int a = (int)d +2;
    cout<< "The value of an a " << a << endl;
    return 0;
}

//check bits 

#include<bits/stdc++.h>

using namespace std;
int main()
{
    for(int i = 1; i <= 10; i=i*2){
        cout<< i << endl; 
    }
    return 0;
}

//triangle perimeter

#include<bits/stdc++.h>

using namespace std;
int main()

{
    int a, b, c, perimeter;
    cin>>a;
    cin>>b;
    cin>>c;
    perimeter = a + b + c;
    cout<< "The perimeter of triangle is: "<< perimeter <<"cm";
    return 0;
}

//Simple interest

#include<bits/stdc++.h>

using namespace std;
int main()

{
    int p = 10, r = 10, y = 1, interest;
    interest = p * r * y / 100;
    cout<< interest;
    return 0;
}

//swaping two values using function

#include<iostream>

using namespace std;
void swap(int *a, int *b){
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}
int main()
{
    int a = 8, b = 10;
    cout<< "The value of a before changing it's value is " << a << endl;
    cout<< "The value of b before changing it's value is " << b << endl;
    swap(&a,&b);
    cout<< "The value of a after changing it's value is " << a << endl;
    cout<< "The value of b after changing it's value is " << b << endl;
    return 0;
}

//find max number between 3 number

#include<iostream>

using namespace std;

int max(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }else if(b > a && b > c){
        return b;
    }else{
        return c;
    }
}
int main()
{
    int a, b, c;
    cin>> a >> b >> c;
    int maxi = max(a, b, c);
    cout<< maxi;
    return 0;
}

//sum of two numbers

#include<iostream>

using namespace std;

int addsumer(int a, int b){
    int result = a + b;
    return result;
}
int main()
{
    int a, b, sum;
    cout<< "Enter the value of a: ";
    cin>> a;
    cout<< "Enter the value of b: ";
    cin>> b;
    sum = addsumer(a, b);
    cout<< "The sum a and b = " << sum << endl;
    return 0;
} 

//check grade 

#include<iostream>

using namespace std;

char grod(int grade){
    if(grade >= 90){
        return 'A';
    }else if(grade >= 70){
        return 'B';
    }else if(grade >= 50){
        return 'C';
    }else {
        return 'D';
    }
}
int main()
{
    int grade;
    cin>> grade;
    char final_grade = grod(grade);
    cout<< final_grade;
    return 0;
} 

//sum of entered number

#include<iostream>

using namespace std;

int getsum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    int ans = getsum(n);
    cout<<"Sum upto "<< n <<" is "<< ans << endl;
    return 0;
} 

//sum of all even

#include<iostream>

using namespace std;

int geteven(int n){
    int sum = 0;
    for(int i = 2; i <= n; i = i+2){
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    int ans = geteven(n); 
    cout<<"Sum upto "<< n <<" is "<< ans << endl;
    return 0;
}

//check address of any variable

#include<iostream>

using namespace std;

int main()
{
    int a = 5;
    cout<< &a;
    return 0;
}

//