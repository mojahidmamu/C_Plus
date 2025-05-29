#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    bool palindrome = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (A[i] != A[n - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
