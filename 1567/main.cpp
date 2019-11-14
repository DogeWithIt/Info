#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;

    while(n){
        if(n > 10){
            while(n>99)
                n /= 10;
            s += n;
        }
        cin >> n;
    }

    cout << s;
    return 0;
}
