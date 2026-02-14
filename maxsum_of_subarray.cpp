#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
vector<int>vec={1,2,3,4,5,6,7,8,9};
int maxs=INT_MIN;
for (int start = 0; start < 9; start++)
{
    int current_sum=0;
    for (int i = start; i < 9; i++)
    {
        current_sum+= vec[i];
        maxs= max(current_sum, maxs);
    }
    
}
cout<< maxs<<endl;
}