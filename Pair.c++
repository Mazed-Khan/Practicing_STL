#include <iostream>

using namespace std;

int main() {
    // Pair = a container that stores two values like (int,strg)(int ,pair<>)
    pair<string, int> p1 = {"Nitrox",5}; // declaring a pair of string and int

    cout << "First element: " << p1.first << endl; // accessing the first element
    cout << "Second element: " << p1.second << endl; // accessing the second element

    pair<int, pair<int,int>> p2 = {10, {20, 30}}; // declaring a pair of int and another pair of int
    
    cout << "First element of p2: " << p2.first << endl; // accessing the first element of p2
    cout << "Second element of p2: " << p2.second.first << ", "
         << p2.second.second << endl; // accessing the second element of p2
    return 0;
}