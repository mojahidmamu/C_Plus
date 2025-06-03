#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> solved;

        int total_ballons = 0;
        for (char c : s)
        {
            if (solved.find(c) == solved.end())
            {
                total_ballons += 2;
                solved.insert(c);
            }
            else
            {
                total_ballons += 1;
            }
        }
        cout << total_ballons << endl;
    }

    return 0;
}
