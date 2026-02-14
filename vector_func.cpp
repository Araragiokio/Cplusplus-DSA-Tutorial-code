#include <iostream>
#include <vector>
using namespace std;
// these are the type of functions that you can apply on vectors
//  size =tell the size of the vector
// puch_back= it pushes the element at the end of vector
// pop_back= deletes the element from the end of vector
//  front = gives the value in the front of vector
//  back = gives the value in the back of vector
//  at = gives the value in the at that position of vector
int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    cout << "size of vector=" << vec.size() << endl; // syntax
    vec.push_back('m');
    cout << "after push back size of vector=" << vec.size() << endl; // syntax
    vec.pop_back();
    cout << vec.front() << endl;
    cout << vec.at(4) << endl;

    return 0;
}