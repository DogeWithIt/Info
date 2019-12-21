#include <fstream>
using namespace std;
ifstream fin("copii.in");
ofstream fout("copii.out");

int ff[100001], expp[100001];

int main()
{
    int k, c;
    fin >> c;

    if(c == 1)
    {
        long long x, aux, p = 1, prod = 1;
        int f5 = 0, f2 = 0;
        fin >> x >> k;

        for(int i = 1; i <= k; i++)
            p *= 10;

        for(int i = 1; i <= x; i++)
        {
            aux = i;

            while(aux%5 == 0)
                aux /= 5, f5++;
        }

        f2 = f5;
        for(int i = 1; i <= x; i++)
        {
            aux = i;

            while(aux%2 == 0 && f2)
                aux /= 2, f2--;
            while(aux%5 == 0 && f5)
                aux /= 5, f5--;

            prod *= aux;
            prod %= p;
        }

        p = 0, aux = prod;

        while(aux)
            p++, aux /= 10;

        for(int i = p+1; i <= k; i++)
            fout << 0;
        fout << prod;
    }

    else
    {
        long long y, f = 2, exp = 0, prod = 1, nrdiv = 1;
        fin >> y;

        int p = 0;
        while(y != 1)
        {
            exp = 0;
            if(f*f > y)
                f = y;

            while(y%f == 0)
                y /= f, exp++;

            if(exp)
              expp[++p] = exp, ff[p] = f;

            if(f != 2)
                f += 2;
            else
                f++;
        }

        for(int i = 1; i <= p; i++)
        {
            if(expp[i]%2 == 1)
                expp[i]--;

            for(int j = 1; j <= expp[i]; j++)
                prod *= ff[i];

            nrdiv *= expp[i]+1;
        }

        fout << prod << ' ' << nrdiv;
    }

    return 0;
}
