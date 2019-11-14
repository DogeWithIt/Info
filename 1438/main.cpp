#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("razboi.in");
ofstream fout("razboi.out");

int main()
{
    int n, t, x, k1 = 0, k2 = 0, i = 1;
    long long s = 0;
    fin >> n >> t;
    if(t == 1){
        while(n){
            fin >> x;
            if(x%2==0)
                k1++;
            else
                k2++;
            n--;
        }
        fout << k1 << ' ' << k2;
    }
    else if(t == 2){
        while(n){
            fin >> x;
            s = 0;
            for(int i = 1; i*i <= x; i++)
                if(x%i == 0)
                    s += x/i + i;
            if(sqrt(x) == floor(sqrt(x)))
                s -= sqrt(x);
            if(s%2 == 0)
                k1++;
            else
                k2++;
            n--;
        }
        fout << k1 << ' ' << k2;
    }

    return 0;
}
