#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    long long int s=0;
    cin >> n;

    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            if(n/i%2 != 0)
                s += n/i;
            if(i%2 != 0)
                s += i;
        }
    }
    if(sqrt(n) == floor(sqrt(n)) && n%2 == 1)
        s -= sqrt(n);
    cout << s;
    return 0;
}
