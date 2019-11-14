#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], i = 0;
    while(i < n){
        cin >> x[i];
        i++;
    }
    if(n%2 == 0){
        for(i = 0; i < n/2; i++){
            cout << x[i] << ' ' << x[n-1-i] << ' ';
        }
    }
    else{
        for(i = 0; i < n/2; i++)
            cout << x[i] << ' ' << x[n-1-i] << ' ';
        cout << x[i];
    }

    return 0;
}
