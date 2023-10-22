// What is vector - Vectors are known as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container automatically.

// Vector First Code

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int element, size;
    cout<< "Enter the size of your vector: ";
    cin>> size;
    for(int i = 0; i<size; i++){
        cout<< "Enter the vector of index "<< i << ": ";
        cin>> element;
        v.push_back(element);
    }
    for(int i = 0; i<v.size(); i++){
        cout<< v[i] << " ";
    }
    return 0;
}

//Insert an element

#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i<v.size(); i++){
        cout<< v[i] << " ";
    }
    cout<< endl;
}
int main() {
    vector<int> v;
    int size, i, element;
    cout<< "Enter the size of vector elements: ";
    cin>> size;
    for(i = 0; i <size; i++){
        cout<< "Enter the vector at index "<< i << ": ";
        cin>> element;
        v.push_back(element);
    }

    cout<< "Before inserting the element" << endl;
    display(v);

    vector<int> :: iterator itr = v.begin(); // (::) its called scoop resolution operator
    v.insert(itr,563);
    
    cout<< "After inserting the element At index 0"<< endl;
    display(v);

    cout<< "After inserting the element At index 1"<< endl;
    display(v);
    v.insert(itr+1,563);

    cout<< "Create 5 copies At index 1"<< endl;
    display(v);
    v.insert(itr+1, 5, 563);
    return 0;
} 

//

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<< "Size-> "<<v.capacity()<< endl;

    v.push_back(1);
    cout<< "Size-> "<< v.capacity() << endl;
    v.push_back(2);
    cout<< "Size-> "<< v.capacity() << endl;
    v.push_back(3);
    cout<< "Size-> "<< v.capacity() << endl;
    return 0;
}

//push back

#include<iostream>
using namespace std;

int main()
{
    vector<int> v;
    cout<< "Size-> "<<v.capacity()<< endl;

    v.push_back(1);
    cout<< "Size-> "<< v.capacity() << endl;
    v.push_back(2);
    cout<< "Size-> "<< v.capacity() << endl;
    v.push_back(3);
    cout<< "Size-> "<< v.capacity() << endl;
    cout<< "Size " << v.size() << endl;
    return 0;
}

//pop back

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<< "Size-> "<<v.capacity()<< endl;

    v.push_back(1);
    cout<< "Size-> "<< v.capacity() << endl;
    v.push_back(2);
    cout<< "Size-> "<< v.capacity() << endl;
    v.push_back(3);
    cout<< "Size-> "<< v.capacity() << endl;
    cout<< "Size " << v.size() << endl;

    cout<< "Front-> " << v.front() << endl;
    cout<< "back-> " << v.back() << endl;

    cout<< "Before pop" << endl;
    for(int i:v) {
        cout<< i <<" ";
    }cout<< endl;

    v.pop_back(); //it will remove last element 
    
    cout<< "After pop" << endl;
    for(int i:v) {
        cout<< i <<" ";
    }
    return 0;
}

//size clear 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<< "Size-> "<<v.capacity()<< endl;

    v.push_back(1);
    cout<< "Size-> "<< v.capacity() << endl;
    v.push_back(2);
    cout<< "Size-> "<< v.capacity() << endl;
    v.push_back(3);
    cout<< "Size-> "<< v.capacity() << endl;

    cout<< "Befor clear size-> " << v.size() << endl;
    v.clear(); //clear all array size
    cout<< "After clear size-> " << v.size() << endl;
    return 0;
}

//whole code 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a{5,1};

    vector<int> last(a);
    cout<< "print" << endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<< "Size-> "<<v.capacity()<< endl;

    v.push_back(1);
    cout<< "Size-> "<< v.capacity() << endl;
    v.push_back(2);
    cout<< "Size-> "<< v.capacity() << endl;
    v.push_back(3);
    cout<< "Size-> "<< v.capacity() << endl;
    cout<< "Size " << v.size() << endl;

    cout<< "Front-> " << v.front() << endl;
    cout<< "back-> " << v.back() << endl;

    cout<< "Before pop" << endl;
    for(int i:v) {
        cout<< i <<" ";
    }cout<< endl;

    v.pop_back(); //it will remove last element 
    
    cout<< "After pop" << endl;
    for(int i:v) {
        cout<< i <<" ";
    }
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v) {
  cout << "Printing vector " << endl;
  int size = v.size();
  for (int i = 0; i < size; i++) {
    cout << v[i] << " ";
    // cout << v.at(i) << " ";
  }
  cout << endl;
}

void print2(vector<int> v) {
  cout << "Printing vector method 2" << endl;
  for(auto it:v){
	  cout<<it<<" ";
  }
  cout << endl;
}

int main() {
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	print(v);
	print2(v);
  vector<char> v;
  v.push_back('a');

  v.push_back('b');
	v.push_back('c');

  v.push_back('d');

  cout << "Front element: " << v[0] << endl;
  cout << "Front element: " << v.front() << endl;
  cout << "End Element: " << v[v.size() - 1] << endl;
  cout << "End Element: " << v.back() << endl;

  // vector initialization
  vector<int>arr; // default with no data, 0 size
  vector<int>arr2(5, -1); // init with n size with specific data
  // arr2.push_back(50);
  // print(arr2);

  vector<int>arr3 = {1,2,3,4,5};
  // arr3.pop_back();
  // print(arr3);

  vector<int>arr4{1,2,3,4,5};
  // print(arr4);

  // how to copy vector
  vector<int> arr5 = {1,2,3,4,5};
  vector<int>arr6(arr5);
  print(arr6);

   // in vector, dont tell size of vector.
   // just keep inserting, i will manage the allocations.
   vector<int> v; // array hi hai.

   // insert
   int n;
   cin >> n;
   for (int i = 0; i < n; ++i) {
     int d;
     cin >> d;
     v.push_back(d);
   }
   print(v);

  // I want to clear the vector
  v.clear();
  v.push_back(50);
   print(v);

  // pop
  v.pop_back();
    print(v);
}