#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, S;
        cin >> N >> S; // S > for sum
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        bool found = false;

        int i = 0, j = i + 1, k = j + 1;
        for (int i = 0; i < N - 2; i++)
        {
            for (int j = i + 1; j < N - 1; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == S)
                    {
                        found = true;
                        break;
                    }
                }
            }
        }

        // i++;
        // j++;
        // k++;

        if (found)
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
// Accepted...