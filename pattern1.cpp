//   1
//  121
// 12321
//1234321
#include <iostream>
using namespace std;

int main()
{
    int n =4;
    for (int i = 0; i < n; i++)
    {
        //space
        for (int j = 0; j <n-1-i; j++)
        {
            cout<< " ";
        }

        // num 1st
        for (int j = 1; j  <=i+1 ; j++)
        {
            cout<< j;
        }
        
        // num 2nd
        for (int j = i ; j >0 ; j--)
        {
           cout<< j;
        }
        
        cout<< endl;
    }
    
    return 0;
}