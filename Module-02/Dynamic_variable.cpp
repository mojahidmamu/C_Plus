#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10; // static variable
    int *b = new int; // dynamic variable
    *b = 10;
    cout << *b << " ";
    cout << b ;
    return 0;
}
