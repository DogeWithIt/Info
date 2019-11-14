#include <iostream>
using namespace std;

int main()
{
    int a, b, k = 0;
    cin >> a >> b;

    while(a && b){
        if(a%10 == b%10)
            k++;
        a /= 10;
        b /= 10;

        if((a == 0 && b != 0) || (b == 0 && a != 0)){
            cout << "NU";
            return 0;
        }
    }

    cout << "DA" << '\n' << k;
    return 0;
}
