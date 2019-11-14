#include <iostream>
using namespace std;

int main()
{
    long long int n, a, nr = 0;
    int Max = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        while(a){
            if(a%10 > Max)
                Max = a%10;
            a /= 10;
        }
        nr = nr*10 + Max;
        Max = 0;
    }

    cout << nr*nr;
    return 0;
}
