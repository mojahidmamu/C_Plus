#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin, S);
    stringstream ss(S);
    string word;
    ss >> word;
    reverse(word.begin(), word.end());
    cout << word;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }

    return 0;
}
