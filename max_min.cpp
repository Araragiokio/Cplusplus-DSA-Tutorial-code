#include <iostream>
#include <climits>
using namespace std;

void max(int arry[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max<=arry[i])
        {
            max = arry[i];
        }
        
    }
    cout << "max number in arry:"<<max<< endl;
    
}

void min(int arry[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min>=arry[i])
        {
            min = arry[i];
        }
        
    }
    cout << "min number in arry:"<<min<< endl;
    
}

int main()
{
    int arry[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    max(arry,size);
    min(arry,size);

    return 0;
}