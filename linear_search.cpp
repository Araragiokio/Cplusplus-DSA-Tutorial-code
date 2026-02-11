#include <iostream>
using namespace std;
// return the the index of target value
int linsech(int arry[],int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arry[i]== target)
        {
            return i;
        }
        
    }
    return -1;
}

int main()
{
    int arry[]= {1,2,3,4,5,6,7};
    int size =7;
    int target= 5;
    cout << linsech(arry, size, target);
    return 0;
}