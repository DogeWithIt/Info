#include <iostream>
using namespace std;

int main()
{
    int a, b, nr = 0, p = 1;
    cin >> a >> b;

    while(a){
        nr += p*((a%10 + b%10)/2);
        a /= 10;
        b /= 10;
        p *= 10;
    }

    cout << nr;
    return 0;
}
