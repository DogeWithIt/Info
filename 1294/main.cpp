#include <bits/stdc++.h>
using namespace std;
ifstream fin ("devt.in");
ofstream fout ("devt.out");

bool ciur[100001];
int sol[100002];
int main()
{
    int n, k, a, b, cntr = 1;
    fin >> n >> k;

    for(int i = 2; i*i <= n; i++)
        if(!ciur[i])
            for(int j= i+i; j <= n; j += i)
                ciur[j] = true;

    for(int i = 2; i <= n; i++)
        {
            if(ciur[i])
                cntr++;
            sol[i] += cntr;
        }

    for(int i = 1; i <= k; i++)
        {
            fin >> a >> b;
            if(a == b)
                fout << (ciur[a] == true || a == 1) << '\n';
            else
                fout << sol[b] - sol[a] + (ciur[a] == true) << '\n';
        }
    return 0;
}
