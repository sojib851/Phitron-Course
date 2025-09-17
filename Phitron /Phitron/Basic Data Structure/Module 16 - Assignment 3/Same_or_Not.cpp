#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    queue<int> qu;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        qu.push(y);
    }

    bool same = true;

    while (!st.empty() && !qu.empty())
    {
        if (n != m)
        {
            same = false;
            break;
        }

        if (st.top() != qu.front())
        {
            same = false;
            break;
        }
        st.pop();
        qu.pop();
    }

    if (same)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}