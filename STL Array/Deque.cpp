//first code

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(3); //it will add the element into last, whatever added into element
    d.push_front(5); //it will add the element into front, whatever added into element
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_back();//it will remove the last element
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_front();//it will remove the first element
    for(int i:d){
        cout<<i<<" ";
    }

    cout<< "Print the first index element" << d.at(1) << endl;
    cout<< "front " << d.front() << endl; //it will print the first index element 
    cout<< "back " << d.back()<< endl; //it will print the last index element
    return 0;
}

//empty elements

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(3);  // it will add the element into last, whatever added into element
    d.push_front(5); // it will add the element into front, whatever added into element
    for (int i : d)
    {
        cout << i << " ";
    }
    d.pop_back(); // it will remove the last element
    for (int i : d)
    {
        cout << i << " ";
    }
    d.pop_front(); // it will remove the first element
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << "front " << d.front() << endl; // it will print the first index element
    cout << "back " << d.back() << endl;   // it will print the last index element

    cout << "Empty or not-> " << d.empty() << endl; // it will remove & empty the all elements
    return 0;
}

//erasing all elements 

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(3);  // it will add the element into last, whatever added into element
    d.push_front(5); // it will add the element into front, whatever added into element
    for (int i : d)
    {
        cout << i << " ";
    }
    d.pop_back(); // it will remove the last element
    for (int i : d)
    {
        cout << i << " ";
    }
    d.pop_front(); // it will remove the first element
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << "front " << d.front() << endl; // it will print the first index element
    cout << "back " << d.back() << endl;   // it will print the last index element


    cout<< "before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1); // it will erase the 1st element
    cout<< "After erase " << d.size() << endl;
    for(int i:d){
        cout<<i<<endl;
    }
    return 0;
}

//another codes

#include<bits/stdc++.h>

using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(5);
    d.push_back(6);
    d.push_front(7);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Before pop back"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_back();
    cout<<"After pop_back"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Before pop_front"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_front();
    cout<<"After pop_front"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"What element at 2nd index-> "<<d.at(2)<<endl;
    cout<<"Element is empty or not-> "<<d.empty()<<" means nope"<<endl;
    cout<<"Before erase-> "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase-> "<<d.size()<<endl;
    return 0;
}

//