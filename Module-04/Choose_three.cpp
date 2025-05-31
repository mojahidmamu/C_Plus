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
        
        int i = 0, j = i + 1, k = j + 1;
        if (arr[i] + arr[j] + arr[k] == S)
        {
            cout << "YES" << endl;
        }
        // else
        // {
        //     cout << "NO" << endl;
        // }

        i++;
        j++;
        k++;
    }

    return 0;
}
