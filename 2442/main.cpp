#include <fstream>
using namespace std;
ifstream fin("cifre006.in");
ofstream fout("cifre006.out");

int main()
{
    int n, k, p1 = 1, p2 = 1, cnt = 0, st = 0, dr = 0;
    fin >> n >> k;
    while(n)
    {
        if(n%10 == k)
        {
            cnt++;
            st += n%10*p1;
            p1 *= 10;
        }
        else
        {
            dr += n%10*p2;
            p2 *= 10;
        }
        n /= 10;
    }

    fout << cnt << '\n' << st*p2 + dr;
    return 0;
}
