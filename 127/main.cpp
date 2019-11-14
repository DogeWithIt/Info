#include <iostream>
using namespace std;

int main()
{
    int n, s = 0, x;
    cin >> n;
    while(n){
        cin >> x;
        while(x > 9)
            x /= 10;
        s += x;
        n--;
    }

    cout << s;
    return 0;
}
