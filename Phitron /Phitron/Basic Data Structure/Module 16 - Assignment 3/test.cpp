#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;

        for (char c : s)
        {
            st.push(c);
            while (st.size() >= 2)
            {
                char top1 = st.top(); st.pop();
                char top2 = st.top(); st.pop();
                if (top1 == top2)
                {
                    continue;
                }
                else
                {
                    st.push(top2);
                    st.push(top1);
                    break;
                }
            }
        }
        if (st.empty())
            cout << "yes\n";
        else
            cout << "NO\n";
    }

    return 0;
}