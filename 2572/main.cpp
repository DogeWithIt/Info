#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    long long int x;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        if(((float)sqrt(x)) == sqrt(x))
            cout << "DA" << '\n';
        else
            cout << "NU" << '\n';
    }
    return 0;
}
