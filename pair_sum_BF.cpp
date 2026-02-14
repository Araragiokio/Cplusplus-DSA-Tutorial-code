#include <iostream>
#include <vector>
using namespace std;
// return the pair from sorted array whose sum is equal to target value; 
// very very important here when asking for pair we need to return more
// than one number that is why the return type of function is vector not int or void
vector<int> pairsum(vector<int> vec, int target, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vec[i] + vec[j] == target)
            {
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
            }
        }
    }
    return ans;
}

int main()
{
    int target = 9;
    vector<int> vec = {2, 7, 11, 15};
    int n = vec.size();
    vector<int> ans = pairsum(vec, target, n);
    for (int val : ans)
    {
        cout << val << endl;
    }

    return 0;
}