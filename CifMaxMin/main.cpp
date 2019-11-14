#include <iostream>
using namespace std;

int main()
{
    int n, Max, Min;
    cin >> n;
    Max = 0;
    Min = 10;

    if(n == 0){
        cout << 0;
        return 0;
    }

    while(n){
        if(n%10 > Max)
            Max = n%10;
        if(n%10 < Min)
            Min = n%10;
        n /= 10;
    }

    cout << Min + Max;
    return 0;
}
