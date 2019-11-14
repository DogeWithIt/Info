#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if ((n/10000000000 % 100)/10 == 0){
        cout << 0 << n/10000000000 % 100 << " ";
    }
    else{
        cout << n/10000000000 % 100 << " ";
    }
    if ((n/100000000 % 100)/10 == 0){
        cout << 0 << n/100000000 % 100 << " ";
    }
    else{
        cout << n/100000000 % 100 << " ";
    }
    if ((n/1000000 % 100)/10 == 0){
        cout << 0 << n/1000000 % 100 << " ";
    }
    else{
        cout << n/1000000 % 100 << " ";
    }
}
