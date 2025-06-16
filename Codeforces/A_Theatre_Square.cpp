#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long tilesAlongLength = (n + a - 1) / a;
    long long tilesAlongWidth = (m + a - 1) / a;

    long long totalTiles = tilesAlongLength * tilesAlongWidth;

    cout << totalTiles << endl;

    return 0;
}