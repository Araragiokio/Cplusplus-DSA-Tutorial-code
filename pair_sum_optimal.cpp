#include <iostream>
#include <vector>
using namespace std;
// 2 pointer approach smallest(i) plus largest(j) =pair sum
//  if pair sum >target then largest value is too high then; j--
//  if pair sum < target then smallest value is too low then; i++

vector<int> pairsum(vector<int> vec, int target, int n)
{
    vector<int> ans;
    int i = 0, j = n - 1;
    // there is not use of running the loop after i==j
    while (i < j)
    {
        int currentsum = vec[i] + vec[j];
        if (currentsum > target)
        {
            j--;
        }
        else if (currentsum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
        }
    }

    return ans;
}

int main()
{
    int target = 26;
    vector<int> vec = {2, 7, 11, 15};
    int n = vec.size();
    vector<int> ans = pairsum(vec, target, n);
    for (int val : ans)
    {
        cout << val << endl;
    }

    return 0;
}