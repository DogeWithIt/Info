#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long x;

    while(n>0){
        cin >> x;

        cout << (x & 1) << " ";
        n--;
    }


    return 0;
}
