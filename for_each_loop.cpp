#include <iostream>
#include <vector>
using namespace std;
// for each loop is the type of loop that works on vectors where 'i' idex doesn't shows the index no. but the value stored at that index
int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // syntax
    for (char value : vec)
    { // for each loop
        cout << value << endl;
    }

    return 0;
}