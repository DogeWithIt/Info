#include <fstream>
using namespace std;
ifstream fin("clase.in");
ofstream fout("clase.out");

int main()
{
    long long int st, dr, n, m, clase[10001], k = 0, x;
    fin >> n;

    for(int i = 1; i <= n; i++)
        fin >> clase[i];

    fin >> m;
    for(int i = 1; i <= m; i++)
    {
        fin >> x;

        st = 1, dr = n;
        while(st < dr)
        {
            if(clase[(st+dr)/2] < x)
                st = (st+dr)/2 + 1;
            else
                dr = (st+dr)/2;
        }

        if(clase[st] == x)
            k++;
    }

    fout << k;
    return 0;
}
