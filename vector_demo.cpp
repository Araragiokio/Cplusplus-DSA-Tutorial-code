#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vec ={1,2,3,4,5,6,7};//1st way
    cout<< vec[0]<<endl;
    vector <int> second_vec (3,0);//2nd way
    cout<< second_vec[0]<<endl;
    cout<< second_vec[1]<<endl;
    cout<< second_vec[2]<<endl;
    
    return 0;
}