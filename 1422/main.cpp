#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("ograda.in");
ofstream fout("ograda.out");

int main()
{
    int n;
    fin >> n;

    if(n == 1)
    {
        long long c, p, g,v ;
        fin >> c >> p;

        v = (p - 2*c)/2, g = c - v;
        fout << g << ' ' << v;
    }
    else
    {
        int c, p, nrdiv = 0, i;
        fin >> c >> p;

        for(i = 1; i*i <= c; i++)
        {
            if(c%i == 0)
            {
                if(i%2 == 1)
                    nrdiv++;
                if(c/i%2 == 1)
                    nrdiv++;
            }
        }

        if(i*i == c)
            nrdiv--;

        fout << nrdiv << ' ';
        nrdiv = 0;

        for(i = 1; i*i <= p; i++)
        {
            if(p%i == 0)
            {
                if(i%2 == 0)
                    nrdiv++;
                if(p/i%2 == 0)
                    nrdiv++;
            }
        }

        if(sqrt(p) == floor(sqrt(p)))
            nrdiv--;
        fout << nrdiv;
    }
    return 0;
}
