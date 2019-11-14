#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("if.in");
ofstream fout("if.out");

int main()
{
    unsigned long long int n, a, b, p = 1, aux;
    fin >> n >> a >> b;

    for(int i=a;i<=b && n;i++)
        if(!(i&(i-1))){
            aux = i;
            break;
        }

    while(aux <= b && n){
        fout << aux << ' ';
        aux *= 2;
        n--;
    }

    return 0;
}
