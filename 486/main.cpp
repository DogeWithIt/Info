#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n], Min, Max;

    for(int i = 0; i < n; i++)
        cin >> v[i];
    Min = v[0], Max = v[0];

    for(int i = 0; i < n; i++)
    {
        if(v[i] < Min)
            Min = v[i];
        else if(v[i] > Max)
            Max = v[i];
    }

    cout << Min << ' ' << Max;
    return 0;
}
