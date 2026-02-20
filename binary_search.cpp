#include <iostream>
#include <vector>
using namespace std;

// condition for binary search is that the algorithm should be sorted.
// time complexcity of binary search is O(logn)
int binarySearch(vector<int> arr, int tar)
{
    int start = 0, end = (arr.size() - 1);
    int ans = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] < tar)
        {
            start = mid + 1;
        }
        else if (arr[mid] > tar)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            return ans;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec1 = {-1, 0, 2, 4, 6, 8, 12}; // odd
    int tar1 = 12;

    int ans = binarySearch(vec1, tar1);
    cout << "the target is at " << ans << " position" << endl;

    vector<int> vec2 = {3, 5, 7, 8, 9, 12}; // even
    int tar2 = 3;
    ans = binarySearch(vec2, tar2);
    cout << "the target is at " << ans << " position" << endl;

    return 0;
}