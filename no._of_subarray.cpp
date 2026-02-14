#include<iostream>
#include<vector>
using namespace std;
// no. of subarray that can be formed from an array
//brute force=  simplest way
int main(){
vector<int>vec={1,2,3,4,5,6,7,8,9};
for (int start = 0; start < 9; start++)
{
    for (int end = start; end < 9; end++)
    {
        for (int i = start; i <= end; i++)
        {
            cout<< vec[i];
        }
        cout<<" ";
    }
    cout<<endl;
}

}