#include <iostream>
using namespace std;

int main()
{
    int n, p = 1, s=0;
    cin >> n;

    while(n){
        if(p%2 == 0)
            s += n%10;
        p++;
        n /= 10;
    }

    cout << s;
    return 0;
}
