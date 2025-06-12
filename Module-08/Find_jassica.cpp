#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool jassicaIsHere = false;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            jassicaIsHere = true;
            break;
        }
    }

    if (jassicaIsHere)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
