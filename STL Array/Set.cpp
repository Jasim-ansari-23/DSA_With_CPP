// What is set - All elements should be unique, and can't be modify, and It'll print in sorted order
//first code

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(6);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(7);
    s.insert(1);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << s.count(5) << endl; // it's says that element is exist or not

    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

//