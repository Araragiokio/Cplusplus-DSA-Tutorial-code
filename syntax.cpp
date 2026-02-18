#include<iostream>
using namespace std;

// pass by value
void changeA1(int a){
    a=20;
}


// pass by reference using pointer
void changeA2(int* ptr){
    *ptr = 20;
}

// pass by reference using alias
void changeA3(int &b){
    b = 20;
}

int main(){
    int a =10;
    int* ptr =&a;//pointer
    int** prt2 = &ptr;// pointer to pointer

    int* ptr2 = NULL;// null pointer
    changeA1(a);
    changeA2(&a);
    changeA3(a);
    return 0;
}