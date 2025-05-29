#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int min_result = INT_MAX;
        for (int i = 1; i < N; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                int current_result = arr[i] + arr[j] + (j - i);
                if (current_result < min_result)
                {
                    min_result = current_result;
                }
            }
        }
        cout << min_result << endl;
    }

    return 0;
}
