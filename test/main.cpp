#include <iostream>
using namespace std;

int main()
{
    int a = 7, b = 5;
    if(a > b){
            a ^= b;
            b ^= a;
            a ^= b;
        }
    cout << a << " " << b;
    return 0;
}
