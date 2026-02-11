//pass by refernce means doing things with the help of address of varable
#include <iostream>
using namespace std;
//array is by default pass by refernce
void changearry(int arry[],int size)
{
    for (int i = 0; i < size; i++)
    {
        arry[i]= 2*arry[i];
    }
    
}

int main()
{
    int arry[] = {5,8,2};

    changearry(arry,3);
    //changes will be reflected in main function also since reference is used
    for (int i = 0; i < 3; i++)
    {
        cout << arry[i]<<endl;
    }
    
    return 0;
}