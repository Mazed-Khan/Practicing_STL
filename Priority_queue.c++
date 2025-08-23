#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(5);
    pq.push(4);
    pq.push(6);

    // Access elements by popping
    while (!pq.empty()) {
        cout << pq.top() << " "; // largest element first (max-heap)
        pq.pop();
    }
    cout << endl;

    // Size and Empty checking code are similar to
    //  other containers like vector and stack
    return 0;
}
