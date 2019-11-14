#include <iostream>
using namespace std;

int main()
{
    int n, Min;
    cin >> n;
    Min = 1000001;

    while(n){
        if(n < Min && n > 0)
            Min = n;
        cin >> n;
    }
    if(Min == 1000001)
        cout << "NU EXISTA";
    else
        cout << Min;

    return 0;
}
