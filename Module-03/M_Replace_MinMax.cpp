#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[min_index  ])
        {
            min_index = i;
        }
    }

    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[max_index])
        {
            max_index = i;
        }
    }

    swap(arr[min_index], arr[max_index]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
