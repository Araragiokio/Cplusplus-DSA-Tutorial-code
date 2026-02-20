#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> vec, int n)// time com.= O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        // we can optimise the code by adding a chechpoint for each loop since the loop 
        //starts from the starting and trevers the whole array we can chech whether any
        // swaping happened if it happened then there is no need to change anything but
        // swaping has not happened then that would mean that array is already sorted and
        // there is no need to run any further loops
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
                isSwap = true;
            }
            if (isSwap = false)
            {
                return;// this will help in improving the time complexcity by little bit
            }
            
        }
    }
    for (int value : vec)
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