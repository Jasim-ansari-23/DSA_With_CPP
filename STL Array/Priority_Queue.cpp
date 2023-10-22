// What is priority queue -> First element always will be the greater element
//first whole code

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int> maxi;
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<< "Maxai Size-> "<< maxi.size() << endl;

    int n = maxi.size();
    for(int i = 0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    cout<< "Maxi is Empty or not? "<< maxi.empty()<< endl;

    //min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    cout<< "Mini Size-> "<< mini.size() << endl;

    int m = mini.size();
    for(int i = 0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<< "Mini Empty or not? "<< mini.empty()<< endl;
    return 0;
}

//max heap

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<< "Size-> "<< maxi.size() << endl;

    int n = maxi.size();
    for(int i = 0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    return 0;
}

//mini heap

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int> > mini;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    cout<< "Mini Size-> "<< mini.size() << endl;

    int m = mini.size();
    for(int i = 0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    return 0;
}

//