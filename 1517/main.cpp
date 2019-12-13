#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("clatite.in");
ofstream fout("clatite.out");

int main()
{
    int n, m, sw, kc = 0, kg = 0, ki = 0, kz = 0, ks = 0, rez = 0, f = 2, p = 0, aux, r, s = 0;
    fin >> n >> m;

    for(n; n <= m; n++)
    {
        sw = 1, f = 2, p = 0, rez = 0;
        for(int i = 2; i*i <= n && sw; i++)
            if(n%i == 0)
                sw = 0;
        if(sw && n > 1)
            kc++;

        else
        {
            if((pow(n, 1/3.) == floor(pow(n, 1/3.))) || (sqrt(n) == floor(sqrt(n))))
               kg++;
            else
            {
                for(int j = 1; j*j <= n; j++)
                    if(n%j == 0)
                        s += j + n/j;

                s -= n;

                if(s == n) ki++;
                else if(n%2 == 0)kz++;
                else ks++;
            }
        }
    }
    fout << kc << ' ' << kg << ' ' << ki << ' ' << kz << ' ' << ks;
    return 0;
}
