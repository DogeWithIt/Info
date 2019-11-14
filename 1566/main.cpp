#include <iostream>
using namespace std;

int main()
{
    int n, k = 0, p = 1, inv = 0;
    cin >> n;

    while(n > 9){
        if(k%2 == 1){
            inv += ((n%10)*10 + n/10%10)*p;
            p *= 100;
            n /= 100;
        }
        k++;
    }

    cout << inv;
    return 0;
}
