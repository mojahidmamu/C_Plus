#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        char c;
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
