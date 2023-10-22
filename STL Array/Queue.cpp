// What is Queue - Means 1st in - 1st out

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Mohammad");
    q.push("Jasim");
    q.push("Ansari");

    cout << "Size before pop-> " << q.size() << endl;
    cout << "First element-> " << q.front() << endl;
    q.pop();
    cout << "First Element-> " << q.front() << endl;
    cout << "Size after pop-> " << q.size() << endl;
    return 0;
}

// 