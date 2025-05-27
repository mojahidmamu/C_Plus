#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        
        // if (a[i] > max)
        // {
        //     max = a[i];
        // }
    }
    cout << mx << endl;
    return 0;
}
