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
    for (int value : vec)
    {
        cout << value << ", ";
    }
    cout <<endl;
}

// time com.= O(n^2)
void SelectionSort(vector <int> vec, int n){
    for (int i = 0; i < n-1; i++)
    {
        int Small_idex = i;
        for (int j = i+1; j < n; j++)
        {
            if (vec[Small_idex]> vec[j])
            {
                Small_idex = j;
            }
            
        }
        swap(vec[i],vec[Small_idex]);
        
    }
    for (int value : vec)
    {
        cout << value << ", ";
    }
    cout <<endl;
    
}

int main()
{
    vector<int> vec1 = {35, 841, 68451, 135, 1, 1, 54, 15484, 12, 48, 45, 4, 5, 4, 448};
    BubbleSort(vec1, vec1.size());
    
    
    
    vector<int> vec2 = {75,12,84,69,35,21,65,94,28,53,91};
    SelectionSort(vec2,vec2.size());

    return 0;
}