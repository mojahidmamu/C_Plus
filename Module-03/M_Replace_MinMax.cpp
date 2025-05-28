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

    int min_element = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_element)
        {
            min_element = arr[i];
        }
    }

    int max_element = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // max
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }
    }

    swap(max_element, min_element);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
