#include <iostream>

#include<vector>
#include<list>
using namespace std;

int main() {
    list<int> lst; // declaring a list of integers
    list<int> lst1 = {1, 2, 3, 4, 5}; // initializing a list with values
    list<int> lst2(5, 10); // initializing a list of size 5 with all elements set to 10

    lst.push_back(1); // adding an element to the end of the list
    lst.push_back(2);
    lst.push_front(3); // adding an element to the front
    lst.push_front(4);

    lst.emplace_back(5); // adding an element to the end using emplace_back
    lst.emplace_front(6); // adding an element to the front using emplace_front

    lst.pop_back(); // removing the last element
    lst.pop_front(); // removing the first element
    
    for (int i : lst) {
        cout << i << " "; // printing elements of the list
    }
    cout << endl;

    return 0;

}