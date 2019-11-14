#include <fstream>
using namespace std;
ifstream fin("maxdiv.in");
ofstream fout("maxdiv.out");

int main()
{
    int n, a, b, cnt, MaxD, Min, d=2, p, nrdiv = 1;
    fin >> a >> b;
    for(a; a >= b; a++){
        while(n > 1)
        {
        p = 0;
		while(n % d == 0)
		{
			++p;
			n /= d;
		}
		d++;
		if(n>1 && d * d > n){
			d = n;
            }
            nrdiv *= (p + 1);
        }
    }
    return 0;
}
