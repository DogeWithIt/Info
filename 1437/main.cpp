#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("fractii4.in");
ofstream fout("fractii4.out");

int main()
{
    int P, n, x, y, r, k = 0, j;
    fin >> P >> n;

    if(P==1)
    {
        for(int i = 0; i < n; i++)
        {
            fin >> x >> y;
            k = 0;
            while(y)
            {
                r = x%y;
                x = y;
                y = r;
            }
            if(x == 1)
                fout << -1 << '\n';
            else
            {
                for(j = 1; j*j <= x; j++)
                    if(x % j == 0)
                        k += 2;
                k--;
                if((j-1)*(j-1) == x) k--;
                fout << k << '\n';
            }
        }
    }
    else
    {
        int aux, bux;
        for(int i = 0; i < n; i++)
        {
            fin >> x >> y;
            aux = x, bux = y;
            while(y)
            {
                r = x%y;
                x = y;
                y = r;
            }
            fout << aux/x << '/' << bux/x << '\n';
        }
    }
    return 0;
}
