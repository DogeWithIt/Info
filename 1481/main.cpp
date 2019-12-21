#include <fstream>
using namespace std;
ifstream fin("pitic.in");
ofstream fout("pitic.out");

bool ciur[1001];
int main()
{
    ciur[1] = true;
    for(int i = 2; i*i <= 1000; i++)
        if(!ciur[i])
            for(int j = i+i; j <= 1000; j += i)
                ciur[j] = true;

    int m, f = 2, p = 0, aux, s = 0;
    fin >> m;

    for(int i = 1; i <= m; i++)
    {
        f = 2, p = 0;
        aux = i, s = 0;

        if(ciur[i])
        {
            while(aux != 1)
            {
                p = 0;
                if(f*f > aux)
                    f = aux;

                while(aux%f == 0)
                    aux /= f, p++;
                if(p)
                    s += f;

                if(f != 2)
                    f += 2;
                else
                    f++;
            }
            fout << s << ' ';
        }
        else
            fout << i << ' ';
    }
    return 0;
}
