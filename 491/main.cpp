#include <iostream>
using namespace std;

int main()
{
    int n, s = 0, i = 0, par1 = -1, par2 = -1;
    cin >> n;
    int x[n];
    while(i < n){
        cin >> x[i];
        i++;
    }
    for(int i = 0; i < n; i++){
        if(x[i]%2 == 0){
            par1 = i;
            break;
        }
    }

    for(int i = par1; i < n; i++)
        if(x[i]%2 == 0)
            par2 = i;

    if(par1 == -1)
        cout << "NU EXISTA";
    else{
        for(int i = par1; i <= par2; i++)
            s += x[i];
        cout << s;
    }
    return 0;
}
