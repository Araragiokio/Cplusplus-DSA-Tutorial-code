#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int smallest = INT_MIN;
    int arry[5]= {15,35,26,24,84};
    //Comparision
    for (int i = 0; i < 5; i++)
    {
       if (arry[i]>smallest)
       {
        smallest = arry[i];
       } 
    }
    cout<<smallest<<endl;
    return 0;
}