#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
//In Map there is key and value pair .(And the key is unique)
int main() {

    map<string,int> m;

    //the map is also sorted by key low to high
    m["apple"] = 100; // inserting key-value pairs
    m["book"] = 500; 
    m["tv"]= 100;
    m["radio"]= 50;
    m["laptop"]= 200;
    m["mobile"]= 150;

    m.insert({"pen", 20}); // inserting using insert function
    m.emplace("notebook", 30); // inserting using emplace function

    m.erase("tv"); // erasing the key-value pair with key "tv"

    if (m.find("apple") != m.end()) { // checking if key "apple" exists
        cout << "Key 'apple' found with value: " << m["apple"] << endl;
    } else {
        cout << "Key 'apple' not found." << endl;
    }
    
    for(auto i : m) {
        cout << i.first << " : " << i.second << endl; // printing key and value pairs
    }
    cout <<"count ="<<m.count("laptop") << endl; // checking if key exists, returns 1 if exists, 0 otherwise
    
    //the size and empty functions are similar to others containers

    cout << "-------------MULTIMAP------------------" << endl;
    multimap<string, int> mm;

    mm.emplace("apple", 10);
    mm.emplace("apple", 20);
    mm.emplace("apple", 30);
    mm.emplace("banana", 40);
    mm.emplace("cherry", 50);

    // mm.erase("apple"); // erasing the key "apple" will remove all its values in multimap
    mm.erase(mm.find("apple")); // erasing only one instance of "apple"
    for(auto j : mm) {
        cout << j.first << " : " << j.second << endl; // printing key and value pairs
    }

    
    cout << "-------------UNORDEREDMAP------------------" << endl;
    // unordered_map does not maintain any order of keys
    // it is faster than map and multimap for most operations
    // it allows duplicate keys, but only keeps the last inserted value for a key

    unordered_map<string, int> um;
    um.emplace("apple", 10);
    um.emplace("pc", 20);
    um.emplace("laptop", 30);
    um.emplace("banana", 40);
    um.emplace("cherry", 50);

    for(auto j : um) {
        cout << j.first << " : " << j.second << endl; // printing key and value pairs
    }

    return 0; // returning 0 to indicate successful execution

}