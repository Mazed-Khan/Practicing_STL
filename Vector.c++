#include <iostream>

#include<vector>

using namespace std;

int main() {


    vector<int> vec;// declaring a vector of integers

    vector<int> vec1={1, 2, 3, 4, 5}; // initializing a vector with values
    
    vector<int> vec2(5,10); // initializing a vector of size 5 with all elements set to 10

    vector<int> vec3(vec1); // copying vec1 into vec3

    vec.push_back(10);//adding elements to the vector
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    
    vec.pop_back();//deleting the last element

    for (int i : vec) {
        cout << i << " ";
    }
    
    cout << "The vector size is " << vec.size() << endl;
    
    cout << vec.capacity() << "capacity" << endl;//push_back → capacity doubles when needed
    
    cout <<"val at index 2 is " << vec.at(2) << endl;//accessing element at index 2

    cout << "The first element is " << vec.front() << endl; // accessing the first element

    cout << "The last element is " << vec.back() << endl; // accessing the last element
    cout << "-------------------------------------------------------------------------------- "<<endl;
    //from vec1= {1, 2, 3, 4,5}
    vec1.erase(vec1.begin()); // erasing the element from beginning vector1
    vec1.erase(vec1.begin() + 1); // erasing the element at index 1 from vector1
    cout << "after earsing elements from vec1: ";
    for (int i : vec1) {
        cout << i << " ";
    }

    //now vec1= {2, 4, 5}
    // vec.insert(vec1.begin() + 1, 100); // inserting 100 at index 1 in vec1
    // now vec1= {2, 100, 4, 5}

    vec1.clear(); // clearing all elements from vec1(but not cleared internal memory and capacity))
    cout << "\nAfter clearing vec1, its size is: " << vec1.size() << endl;
    cout << "\n capacity of vec1 is: " << vec1.capacity() << endl;
    cout <<"is empty then its print 1 else 0: " << vec1.empty() << endl; // checking if vec1 is empty 
    
    cout << "-------------------------------------------------------------------------------- "<<endl;
    //Iterators in vectors
    cout << "Iterating through vec4 using iterators: ";
    vector<int> vec4 = {1, 2, 3, 4, 5};
    cout << "Forward: ";
    for (auto it = vec4.begin(); it != vec4.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Backward: ";
    for (auto rit = vec4.rbegin(); rit != vec4.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;
    

    return 0;
}