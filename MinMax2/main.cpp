#include <iostream>
using namespace std;

int main()

{

    int n, m, cifmax1=0, cifmin1=9, cifmax2=0, cifmin2=9;
    int nrmax, nrmin, cif;
    cin >> n >> m;

    while (n){
       cif=n%10;
       if (cif>cifmax1) {cifmax1=cif;}
       if (cif<cifmin1) {cifmin1=cif;}
       n=n/10;
    }

    while (m){
        cif=m%10;
        if (cif>cifmax2) {cifmax2=cif;}
        if (cif<cifmin2) {cifmin2=cif;}
        m=m/10;
    }

    nrmax=max(cifmax1,cifmax2)*10 + min(cifmax1,cifmax2);
    nrmin=min(cifmin1,cifmin2)*10 + max(cifmin1, cifmin2);


    cout << nrmax << " " << nrmin;
    return 0;
}
