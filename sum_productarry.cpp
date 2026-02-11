#include <iostream>
using namespace std;

void sum(int arry[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arry[i];
    }
    cout << "sum is :" << sum << endl;
}
void product(int arry[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arry[i];
    }
    cout << "product is:" << product << endl;
}
int main()
{
    int arry[] = {23, 45, 67, 65, 87, 98, 78, 90};
    int size = 8;
    sum(arry, size);
    product(arry, size);
    return 0;
}