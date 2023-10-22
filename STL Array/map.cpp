// what is map - The map container allows you to store unique keys in sorted order, and each key is associated with a value. It ensures fast retrieval of elements based on the keys by performing logarithmic time complexity searches.

// first code

#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Jasim";
    m[2] = "Ansari";
    m[3] = "Jibrail";
    m.insert({44, "Faizan"});
    for (auto i : m)
    {
        cout << i.first << endl; // for printing integers only
        //      cout<<i.first<<" "<<i.second<<endl; //for printing strings only
    }
    cout << "Find 44 -> " << m.count(44) << endl;
    return 0;
}

// erase something

#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Jasim";
    m[2] = "Ansari";
    m[3] = "Jibrail";
    m.insert({44, "Faizan"});

    cout << "Befor erase" << endl;
    for (auto i : m)
    {
        cout << i.first << endl;                   
        cout << i.first << " " << i.second << endl; 
    }
    cout << "Find 44 -> " << m.count(44) << endl;

    m.erase(44);
    cout << "After erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}

//itrator

#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Jasim";
    m[2] = "Ansari";
    m[3] = "Jibrail";
    m.insert({44, "Faizan"});

    cout << "Befor erase" << endl;
    for (auto i : m)
    {
        cout << i.first << endl; // for printing integers only
        //cout<<i.first<<" "<<i.second<<endl; //for printing strings only
    }
    cout << "Find 44 -> " << m.count(44) << endl;
    
    m.erase(44);
    cout << "After erase" << endl;
    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl; 
    }

    auto it = m.find(44);

    for(auto i = it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}