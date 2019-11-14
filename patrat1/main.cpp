#include <iostream>
using namespace std;

int main()
{
    int n, k = 1;
    char c, d;
    cin >> n >> c >> d;

    while(k <= n * n){
        if(k%2 == 1)
            cout << c;
        else
            cout << d;
        if(k%n == 0)
            cout << '\n';
        k++;
    }

    return 0;
}
