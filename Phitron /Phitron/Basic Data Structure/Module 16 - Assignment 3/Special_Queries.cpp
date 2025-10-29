#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    queue<string> line;

    for (int i = 0; i < Q; i++)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            string name;
            cin >> name;
            line.push(name);
        }
        else if (type == 1)
        {
            if (line.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << line.front() << endl;
                line.pop();
            }
        }
    }

    return 0;
}