//For beginners :- Use #include<bits/stdc++.h> library , it contains all libraries like vector ,array , string . So you don't need to write different headeefiles for different data structure again & again .

// Use STL Array Types
//what is deque -A deque is similar to a vector in that it provides dynamic resizing, efficient random access to elements, and contiguous memory storage. However, it has a few key differences: - The deque supports efficient insertion and deletion of elements at both the front and the back. You can use the member functions push_front, push_back, pop_front, and pop_back to manipulate elements at the beginning or end of the deque.
// What is set - All elements should be unique, and can't be modify, and It'll print in sorted order
// What is priority queue -> First element always will be the greater element
// What is Queue - 1st in - 1st out, means jo sbse aage khada ho ussi ka program run hoga simple
// what is stack, Last in - First out, basically jo bhi elements add krenge as a string, integer etc. wo sab last se start hoga
//what is map - The map container allows you to store unique keys in sorted order, and each key is associated with a value. It ensures fast retrieval of elements based on the keys by performing logarithmic time complexity searches
// What is vector - Vectors are known as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container automatically.

// Use of their data types
// Use of (Pop) ->

// data.pop_front();//it will remove the first element
// data.pop() - it will remove the element
// data.pop_back() - it will remove the last element

// Use of (Push)

// data.push_back(3); //it will add the element into last, whatever added into element
// data.push_front(5); //it will add the element into front, whatever added into element

// Use of (Front_Back) ->

//cout<< "front " << d.front() << endl; -> // it will print the first index element 
//cout<< "back " << d.back()<< endl; -> // it will print the last index element

// Other Usable Libraries

// data.erase(d.begin(), d.begin()+1); // it will erase the 1st element
// data.erase(l.begin()); // it will start to erase from begirding
// cout << "Empty or not-> " << d.empty() << endl; // it will remove & empty the all elements
// list<int> n(l); //it will copy the l into n
// v.clear(); //clear all array size
// data.push("Jasim"); -> It is used to print strings
// cout<<s.count(5) <<endl; //it's says that element is exist or not, I mean the element you're looking for is present or not
// reverse(abcd.begin(), abcd.end()); - it wil reverse the string 
// rotate(v.begin(), v.begin()+1,v.end()); - it wil rotate into between - it will print in sorting order
// cout<< "Size-> "<< v.capacity() << endl; - it will tell how much capacity of an vector array