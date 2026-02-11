#include <iostream>
using namespace std;

int main()
{
    int a = 8, b = 10;
    cout << (a & b) << endl;  // &-"bitwise and" compare binary code if 1&1 then only gives 1 at that oplace otherwise 0
    cout << (a | b) << endl;  // |-"bitwise or" compare binary code
    cout << (a ^ b) << endl;  // |-"bitwise Xor" aka {exclusive or} compare binary code if same then output 0 otherwise 1
    cout << (a << 1) << endl; // |-"bitwise LEFT SHIFT" SHIFTS THE BINARY CODE BY 1 PLACE TOWARDS LEFT
    cout << (a >> 1) << endl; // |-"bitwise RIGHT SHIFT" SHIFTS THE BINARY CODE BY 1 PLACE TOWARDS RIGHT

    return 0;
}