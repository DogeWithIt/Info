#include <iostream>
using namespace std;

int main()
{
    long long int n, s = 0, p = 1;
    cin >> n;

    while(n){
        s += n;
        n /= 10;
    }

    cout << s;
    return 0;
}
