#include<iostream>
using namespace std;

int main()
{
    int num;
    bool isPrime = true;
    cout<<"tell the number\n";
    cin>> num;
    
    for (int i = 2; i < num-1; i++)
    {
        if(num % i == 0){
            isPrime = false;
            break;
        }
    }
    // true -> 1: false ->0
    if (isPrime == true)
    {
        cout << "prime number";
    }
    else{
        cout<< "non-prime number";
    }
    
    return 0;
}