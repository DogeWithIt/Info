#include <fstream>
using namespace std;
ifstream fin("pavaj.in");
ofstream fout("pavaj.out");

int x[1005][1005];
int main()
{
    int n, m, is, ij, js, jj, k, det = 0;
    fin >> n >> m >> k;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
       {
         fin >> x[i][j];
         x[i][j] = x[i][j] + x[i-1][j] + x[i][j-1] - x[i-1][j-1];
       }

    for(int i = 1; i <= k; i++)
    {
        det = 0;
        fin >> is >> js >> ij >> jj;

        if(is > ij)
        {
            is ^= ij;
            ij ^= is;
            is ^= ij;
        }
        if(js > jj)
        {
            js ^= jj;
            jj ^= js;
            js ^= jj;
        }

        det = x[ij][jj] - x[is-1][jj] - x[ij][js-1] + x[is-1][js-1];

        if(det == 0)
            fout << 0 << '\n';
        else if(det == (jj - js + 1)*(ij - is + 1))
            fout << 1 << '\n';
        else
            fout << 2 << '\n';
    }
    return 0;
}
