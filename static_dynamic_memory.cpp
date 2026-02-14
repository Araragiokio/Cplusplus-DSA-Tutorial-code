#include<iostream>
#include<vector>
using namespace std;
// static memory                                 || dynamic memory
//1. memory is allotcated during complation time ||1. memory is allocated during runtime
//2. it is allocated in stack memory             ||2. it is allocated in heap memory
int main()
{
    vector <int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    cout<< vec.size()<< endl;
    cout<< vec.capacity()<< endl;

    return 0;
}