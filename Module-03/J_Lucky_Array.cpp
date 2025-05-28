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

    int min_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min_element)
        {
            min_count++;
        }
    }

    if (min_count % 2 == 1)
    {
        cout << "LUcky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}
