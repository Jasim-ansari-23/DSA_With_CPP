//what is stack, basically jo bhi elements add krenge as a string, integer etc. wo sab last se start hoga

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Ansari");
    s.push("Jasim");
    s.push("Mohammad");

    cout<<"Top element-> "<< s.top()<< endl;
    return 0;
}

//