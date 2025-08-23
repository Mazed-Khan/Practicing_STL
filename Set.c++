#include <iostream>

using namespace std;
#include <set>
#include <unordered_set>
// In Set, there are unique elements (no key-value pairs like in Map).
int main(){
    set<int> s;
    s.insert(1); // inserting elements
    s.insert(2);
    s.insert(2); // duplicate insertion will not change the set
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    for(auto i : s) {
        cout << i<<" " << endl; 
    }

    cout << "Lower bound of 4: " << *s.lower_bound(4) << endl; // returns the first element not less than (n) otherwise end()
    s.upper_bound(4); // returns the first element greater than (n)
    cout << "Upper bound of 4: " << *s.upper_bound(4) << endl; // returns the first element greater than (n)

    cout << "-------------MULTISET------------------" << endl;

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2); // allows duplicate elements
    ms.insert(3);
    for(auto i : ms) {
        cout << i<<" " << endl; 
    }

    cout << "-------------UNORDEREDSET------------------" << endl;
    // unordered_set does not maintain any order of elements
    // it is faster than set and multiset for most operations

    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);

    for(auto i : us) {
        cout << i<<" " << endl; 
    }
    return 0;
}
