#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a[3]; // static-array
    int *a = new int[3]; // dynamic-array
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
   int *b = new int[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    b[3] = 50;
    b[4] = 51;    
    
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}
