#include <iostream>
using namespace std;

int main()
{
    int n, s = 0, og = 0;
    cin >> n;

    while(n){
        s += n%10;
        n /= 10;
    }

    while(s){
        og = og*10 + s%10;
        s /= 10;
    }

    cout << og;
    return 0;
}
