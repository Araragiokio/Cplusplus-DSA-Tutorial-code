#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (tar > arr[mid])
        {
            start = mid + 1;
            return binarySearch(arr, tar, start, end);
        }
        else if (arr[mid] > tar)
        {
            end = mid - 1;
            return binarySearch(arr, tar, start, end);
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    vector<int> vec1 = {-1, 0, 2, 4, 6, 8, 12}; // odd
    int tar1 = 12;

    int ans = binarySearch(vec1, tar1, 0, vec1.size() - 1);
    cout << "the target is at " << ans << " position" << endl;

    vector<int> vec2 = {3, 5, 7, 8, 9, 12}; // even
    int tar2 = 3;
    ans = binarySearch(vec2, tar2, 0, vec2.size() - 1);
    cout << "the target is at " << ans << " position" << endl;

    return 0;
}