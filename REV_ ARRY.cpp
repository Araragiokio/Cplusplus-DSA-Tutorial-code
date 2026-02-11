#include <iostream>
using namespace std;
// 2 pointer approach
void revarry(int arry[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1 - i)
        {
            swap(arry[i], arry[size - 1 - i]);
        }
    }
}

int main()
{
    // int arry[] = {52, 78, 69, 74, 54};
    // int size = 5;
    // revarry(arry, size);
    // for (int i = 0; i < 5; i++)
    // {
    //    cout << arry[i] << endl;
    // }

    int array[] = {14, 54, 21, 65, 32, 78, 96, 45, 28, 45, 63, 98};
    int sz = 12;
    revarry(array, sz);
    for (int i = 0; i < 12; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}