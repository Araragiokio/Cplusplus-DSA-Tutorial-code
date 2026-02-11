#include <iostream>
using namespace std;

int a = 5; // global scope
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "hello" << endl;
    }

    cout << a << endl;
    // cout<<i<<endl;

    return 0;
}