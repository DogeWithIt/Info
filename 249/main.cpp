#include <fstream>
using namespace std;
ifstream fin("pozitiex.in");
ofstream fout("pozitiex.out");

int main()
{
    long long int x, n, i = 0, sortat = 1;
    fin >> x >> n;
    int y[n];
    while(i < n){
        fin >> y[i];
        i++;
    }
    do{
        sortat = 1;
        for(i = 0; i < n - 1; i++){
            if(y[i] > y[i+1]){
                sortat = 0;
                y[i] = y[i] + y[i+1];
                y[i+1] = y[i] - y[i+1];
                y[i] = y[i] - y[i+1];
            }
        }
    }while(!sortat);
    for(i = 0; i < n; i++){
        if(y[i] == x){
            fout << i+1;
            return 0;
        }
    }

    return 0;
}
