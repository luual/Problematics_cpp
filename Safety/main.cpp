#include <vector>
#include <iostream>

//////////////////////////////////////
// This code will show that cpp is unsafe
// This file will be compile in C++11


using namespace std;

int main()
{
    //////////////////////////////////    
    // We instiance a vector
    vector<int> v;
    //////////////////////////////////
    // We push some data
    // And make a reference to the first elem
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    auto &elem = v[0]; // <- this part is tricky
    //////////////////////////////////
    // We print the data
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }
    ////////////////////////////////// 
    // Now we will talk about the unsafety
    // What if we push back some data and 
    // we try to look to this reference
    v.push_back(4);
    //////////////////////////////////
    // We print the data again, to be sure
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }
    //////////////////////////////////
    // And we print the data 
    cout << "Here is the trick vector[0] :  " << elem << endl;
    ////////////////////////////////// 
    // If you compile, with C++11 flag
    // You could get a segmentation fault
    // or something completely wrong
    return 0;
}
