#include <fstream>
using namespace std;
ifstream fin("exp.in");
ofstream fout("exp.out");

int v1[100000], v2[100000];
int main()
{
    int n, m, f = 2, p = 0, rez = 0, r, i = 0;
    long long x, prod = 1, aux;
    fin >> m >> n;

    for(int i = 0; i < n; i++)
    {
        fin >> x;
        p = 0, f = 2;
        while(x != 1)
        {
            p = 0;
            while(x%f == 0)
                x /= f, p++;
            if(p)
                v2[f] += p;

            if(f*f > x)
                f = x;
            else
            {
                if(f == 2)
                    f++;
                else
                    f += 2;
            }
        }
    }

    for(int j = 0; j < 100000; j++)
        if(v2[j] != 0)
        {
            if(v2[j]%m != 0)
            {
                fout << 0;
                return 0;
            }
        }
    fout << 1 << '\n';
    for(int j = 0; j < 100000; j++)
        if(v2[j] != 0)
            fout << j << ' ' << v2[j]/m << '\n';
    return 0;
}
