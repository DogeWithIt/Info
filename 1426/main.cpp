#include <fstream>
using namespace std;
ifstream fin("pozne.in");
ofstream fout("pozne.out");

int main()
{
    int n, c, s, p, x;
    fin >> p;

    if(p == 1)
    {
        int sw = 0, aux;
        fin >> n >> s >> c;
        for(int i = 0; i < n; i++)
        {
            fin >> x;
            aux = x, sw = 0;
            while(x)
            {
                if(x%10 == c)
                    sw = 1;
                x /= 10;
            }
            if(sw)
                fout << aux << ' ';
        }
    }
    else
    {
        int og = 0, k = 0, k2 = 0, sw = 0, aux, sw2;
        fin >> n >> s >> c;
        for(int i = 0; i < n; i++)
        {
            fin >> x;
            og = 0, sw = 1, aux = x, sw2 = 0;
            while(x)
            {
                og = og*10+x%10;
                x /= 10;
            }
            for(int j = 2; j*j <= og; j++)
                if(og%j == 0)
                    sw = 0;
            if(sw && og > 1)
            {
                sw2 = 0;
                while(aux)
                {
                    if(aux%10 == c)
                        sw2 = 1;
                    aux /= 10;
                }
                if(sw2)
                    k2++;
                k++;
            }
        }
        fout << k << ' ';
        if(k-k2 > 0)
            fout << 1;
        else if(k-k2 == 0)
            fout << 0;
        else
            fout << -1;
    }
    return 0;
}
