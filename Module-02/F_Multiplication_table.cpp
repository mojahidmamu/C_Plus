#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= 12; i++)
    {
        int mul = N * i;
        cout << N << " * " << i << " = " << mul << endl;
    }

    return 0;
}
