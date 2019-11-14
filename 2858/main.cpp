#include <iostream>
using namespace std;

int main()
{
    int x[100], n, i = 0, sp = 0, spoz = 0, div10 = 0, s = 0;
    cin >> n;

    while(i < n){
        cin >> x[i];
        i++;
    }

    for(int i = n-1; i >= 0; i--){
        cout << x[i] << ' ';
    }

    for(int i = 0; i < n; i++){
        if(x[i]%2 == 0)
            sp += x[i];
        if((i+1)%2 == 0)
            spoz += x[i];
        if(x[i]%10 == 0)
            div10++;
        if(x[i]%3 == 0 && (i+1)%2 == 1)
            s += x[i];
    }
    cout << '\n' << sp << '\n' << spoz << '\n' << div10 << '\n' << s;
    return 0;
}
