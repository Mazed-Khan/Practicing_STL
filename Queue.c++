#include <iostream>
#include <queue>
using namespace std;
// Stack = a container that follows Last In First Out (LIFO) principle
int main() {
    queue<int> q; // declaring a stack of integers

    q.push(1);
    q.push(2);
    q.push(3); 
    
    cout << "Queue size before pop: " << q.size() << endl; // checking the size of queue
    cout << "checking front" << q.front() << endl;
    q.pop(); // removing the front element
    cout<<endl;
    cout <<"is empty then its print 1 else 0: " << q.empty() << endl; // checking if q is empty 

    queue<int> q2; 
    q2.swap(q); // swapping contents of q with q2 and q is now empty

    
    cout << endl;
    return 0;
}