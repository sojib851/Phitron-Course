#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}