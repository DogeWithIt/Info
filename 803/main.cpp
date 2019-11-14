#include <fstream>
using namespace std;
ifstream fin("nrsufix.in");
ofstream fout("nrsufix.out");

int main()
{
    int a, b, aux, p=1, sw = 0;
    fin >> a;
    aux = a;

    while(aux){
        p *= 10;
        aux /= 10;
    }

    while(fin >> b){
        if(b % p == a){
            sw++;
            aux = b;
        }
    }

    if(sw)
        fout << aux;
    else
        fout << "nu exista";

    fout.close();
    return 0;
}
