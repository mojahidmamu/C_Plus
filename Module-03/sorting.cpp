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

    // Asending: 
    // sort(arr, arr + n);// sort(starting, ending): build-in-function
    // Desending Order: 
    sort(arr, arr + n, greater<int>()); //greater is compare function

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
