#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    size_t pos;
    while ((pos = s.find("EGYPT")) != string::npos)
    {
        s.replace(pos, 5, " ");
    }

    cout << s << endl;
    return 0;
}
