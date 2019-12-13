#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bomboane1.in");
ofstream fout("bomboane1.out");

int main()
{
    int a, b, nrdiv, MaxDiv = 0, Max, Min, k = 1;
    fin >> a >> b;

    for(a; a <= b; a++)
    {
        nrdiv = 0;
        if(a%2 == 0)
        {
            for(int d = 1; d*d <= a; d++)
            {
                if(a%d == 0)
                    {
                        if(d%2 == 0)
                            nrdiv++;
                        if(a/d%2 == 0)
                            nrdiv++;
                    }
            }
        }
        if(sqrt(a) == floor(sqrt(a)))
            nrdiv--;

        if(nrdiv > MaxDiv)
        {
            MaxDiv = nrdiv;
            Min = a;
            Max = a;
            k = 1;
        }

        else if(nrdiv == MaxDiv)
            Max = a, k++;
    }

    fout << Min << ' ' << Max << ' ' << k << ' ' << MaxDiv;
    return 0;
}
