#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> vec, int n)// time com.= O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
    for (int value : vec)//*important* vector is not pass by reference by default in cpp
    {
        cout << value << endl;
    }
}

int main()
{
    vector<int> vec = {35, 841, 68451, 135, 1, 1, 54, 15484, 12, 48, 45, 4, 5, 4, 448};
    BubbleSort(vec, vec.size());

    return 0;
}