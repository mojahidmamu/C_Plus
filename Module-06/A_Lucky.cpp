#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string ticket;
        cin >> ticket;

        int sumFirst = 0;
        int sumLast = 0;
        for (int i = 0; i < 3; i++)
        {
            sumFirst += ticket[i] - '0';
            sumLast += ticket[i + 3] - '0';
        }

        if (sumFirst == sumLast)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
