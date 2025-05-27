#include <bits/stdc++.h>
using namespace std;
int main()
{
    char X;
    cin >> X;
    if ('0' <= X && X <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if ('a' <= X && X <= 'z')
        {
            cout << "IS SMALL" << endl;
        }
        else
        {
            cout << "IS CAPITAL" << endl;
        }
    }

    return 0;
}
