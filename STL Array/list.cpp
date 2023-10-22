// first code

#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(3);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    l.erase(l.begin());
    cout<< "After erase" << endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list - " << l.size() << endl;
    return 0;
}

//copy an element

#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

//  list<int> n(l); //it will copy the l into n
    list<int> n(5,100);
    cout<< "Printing n"<< endl;
    for(int i:n){
        cout<<i<<" ";
    }

    l.push_back(1);
    l.push_front(3);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    l.erase(l.begin());
    cout<< "After erase" << endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list - " << l.size() << endl;
    return 0;
}

//