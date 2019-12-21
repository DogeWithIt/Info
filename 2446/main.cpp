#include <fstream>
using namespace std;
ifstream fin("numere24.in");
ofstream fout("numere24.out");

int main()
{
    int c, n;
    fin >> c;

    if(c == 1)
    {
        fin >> n;
        fout << (n-1) * 10;
    }

    else if(c == 2)
    {
        long long int x, auxx, og = 0;
        fin >> x;

        for(int i = 1; i <= 3; i++)
        {
            og = 0, x /= 10, auxx = x;
            if(x%10 != 0)
            {
                while(auxx)
                    og = og*10 + auxx%10, auxx /= 10;
                if(x == og)
                    fout << 1 << ' ';
                else
                    fout << 2 << ' ';
            }
            else
                fout << 0 << ' ';
        }
    }

    else if(c == 3)
    {
        int k;
        fin >> k;

        if(k == 1)
            fout << 9;
        else if(k == 2)
            fout << 153;
        else if(k == 3)
            fout << 1530;
        else if(k==4)
            fout << 16110;

        else
        {
            fout << 161;
            for (int i = 1; i <= k-3-(k-1)/2; i++)
                fout << 9;
            fout << 1;
            for(int i = 1; i <= (k-1)/2; i++)
                fout << 9;
        }
    }
    return 0;
}
