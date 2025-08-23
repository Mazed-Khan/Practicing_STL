#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {1, 2, 3, 4, 5};
    
    dq.push_back(6); // adding an element to the end
    dq.push_front(0); // adding an element to the front
    dq.emplace_back(7); // adding an element to the end using emplace_back
    dq.emplace_front(-1); // adding an element to the front using emplace_front
    dq.pop_back(); // removing the last element
    dq.pop_front(); // removing the first element

    for (int i : dq) {
        cout << i << " "; // printing elements of the deque
    }
    cout << endl;
    
}