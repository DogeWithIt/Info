#include <fstream>
using namespace std;
ifstream fin("pyk.in");
ofstream fout("pyk.out");

int exp[10001];
int main()
{
    int n, c, k;
    fin >> c >> k >> n;

    if(c == 1)
    {
        int sw = 1, x, Max = -1, Min = 10001, aux;

        for(int i = 1; i <= n; i++)
        {
            sw = 1;
            fin >> x;
            aux = x;
            while(x > 9 && sw)
            {
                if(x%10 != x/10%10)
                    sw = 0;
                x /= 10;
            }

            if(sw)
            {
                if(aux > Max)
                    Max = aux;
                if(aux < Min)
                    Min = aux;
            }
        }

        if(Max == -1 && Min == 10001)
            fout << 1;
        else
            fout << Min << ' ' << Max;
    }

    else
    {
        int f = 2, x, p = 0, m = 0, rez = 0, r;

        for(int i = 1; i <= n; i++)
        {
            fin >> x;
            f = 2;

            while(x != 1)
            {
                p = 0;
                if(f*f > x)
                    f = x;

                while(x%f == 0)
                    x /= f, p++;

                if(p)
                    exp[f] += p;

                if(f != 2)
                    f += 2;
                else
                    f++;
            }
        }

        for(int i = 1; i <= 10000; i++)
            if(exp[i])
            {
                p = exp[i];
                while(p)
                {
                    r = rez%p;
                    rez = p;
                    p = r;
                }
            }

        if(rez%k == 0)
            fout << 1 << '\n' << 2 << ' ' << k;

        else
        {
            for(int i = 1; i <= 10000; i++)
                if(exp[i])
                    if(exp[i]%k)
                        m++;
            fout << m << '\n';

            for(int i = 1; i <= 10000; i++)
                if(exp[i])
                    if(exp[i]%k)
                        fout << i << ' ' << k - exp[i]%k << '\n';
        }
    }
    return 0;
}
