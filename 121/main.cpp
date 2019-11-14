#include <iostream>
using namespace std;

int main()
{
    int n, Max, k = 0, aux;
    cin >> n;
    Max = 0;

    if(n == 0){
        cout << 0 << " " << 1;
        return 0;
    }

    while(n){
        if(n%10 > Max){
            Max = n%10;
            k = 1;
        }
        else if (n%10 == Max)
            k++;

        n /= 10;
    }

    cout << Max << " " << k;
    return 0;
}
