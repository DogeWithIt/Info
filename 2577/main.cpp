#include <iostream>
using namespace std;

int main()
{
    long long n;
    int x, b;
    cin >> x;

    while(x){
        cin >> n >> b;
        n = n >> b;

        cout << (n&0);
        x--;
    }

    return 0;
}
