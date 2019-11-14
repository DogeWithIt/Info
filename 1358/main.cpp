#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (y > x){
        y = x + y;
        x = y - x;
        y = y - x;
    }

    if(x-y == 1){
    	if(y % 2 != 0)
            cout << "minciuna";
        else
            cout << "Andrei e mai responsabil";
    }
    else
        cout << "minciuna";

    return 0;
}
