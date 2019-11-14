#include <fstream>
using namespace std;
ifstream fin("aparitiicifra.in");
ofstream fout("aparitiicifra.out");

int main()
{
    int n, c, aux = n, k = , i = 0;
    fin >> n >> c;

    while(n){
        aux = i;
        while(aux){
            if(aux%10 == c)
                k++;
            aux /= 10;
        }
        i++;
    }

    fout << k;
    fin.close();
    fout.close();
    return 0;
}
