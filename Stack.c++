#include <iostream>
#include <stack>
using namespace std;
// Stack = a container that follows Last In First Out (LIFO) principle
int main() {
    stack<int> s; // declaring a stack of integers

    s.push(1);
    s.push(2);
    s.push(3); 

    stack<int> s2;
    s2.swap(s); // swapping contents of s with s2 and s is now empty

    cout << "s size: " << s.size() << endl; // checking the size of stack s
    cout << "s2 size: " << s2.size() << endl; // checking the size of stack s2

    while (!s2.empty()) { // checking if the stack is not empty
        cout << s2.top() << " "; // accessing the top element
        s2.pop(); // removing the top element
    }
    cout << endl;
    return 0;
}