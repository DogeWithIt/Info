#include <iostream>
using namespace std;

int main()
{
    int k, n;
    cin >> n;

    while(n){
        cin >> k;
        if(k%3 == 1)
            cout << (k/300 + 1)%10 << " ";

        else if(k%3 == 2)
            cout << (k/30)%10 << " ";

        else if(k%3 == 0)
            cout << (k/3 - 1)%10 << " ";
        n--;
    }

    return 0;
}
