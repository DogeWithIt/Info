#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int k3=0, k2=0;
    cin >> n;

    while(n){
        if(n%10 == 2)
            k2++;
        else
            k3++;

        n /= 10;
    }
    if(k3 != k2)
        cout << 3*(k3 > k2) + 2*(!(k3 > k2));
    else
        cout << 2 << " " << 3;
    return 0;
}
