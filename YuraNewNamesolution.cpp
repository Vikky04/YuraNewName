#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (str == "^")
        {
            cout << 1 << "\n";
            continue;
        }
        int c = 0;
        if (str[0] == '_')
            c++;
        if (str.back() == '_')
            c++;
        for (int i = 0; i < str.size() - 1; i++)
        {
            if (str[i] == '_' && str[i + 1] == '_')
                c++;
        }
        cout << c << endl;
    }

    return 0;
}
