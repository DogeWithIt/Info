#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
ifstream fin("maxd.in");
ofstream fout("maxd.out");

int main()
{
    int x, y, Maxd = 0, Min = 1000000001, c = 1, nrechi = 0, nrdiv;
    fin >> x >> y;

    for(y; y >= x; y--){
        nrdiv = 0;
        for(int i = 1; i <= sqrt(y); i++){
            if(y%i == 0)
                nrdiv += 2;
        }
        nrdiv -= (sqrt(y)*sqrt(y) == y) * 1;
        cout << nrdiv << " ";
        if(y == Min && nrdiv == Maxd)
            nrechi++;
        else if(nrdiv == Maxd)
            c++;
        if(y < Min && nrdiv >= Maxd){
            Min = y;
            Maxd = nrdiv;
        }
    }

    if(nrechi != 0)
        fout << Min << " " << Maxd << " " << nrechi;
    else
        fout << Min << " " << Maxd << " " << c;
    return 0;
}
