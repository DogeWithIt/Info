#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("canguri.in");
ofstream fout("canguri.out");

int main()
{
    int salt, nr, Max = 0, Maxnr;
    while(fin >> nr >> salt)
    {
        fin >> nr >> salt;
        if(salt >= Max)
            Max = salt, Maxnr = nr;
    }

    fout << Maxnr << '\n' << ceil(800.0/Max);
    return 0;
}
