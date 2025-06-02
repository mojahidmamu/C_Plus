#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    stringstream ss(S);
    string word;
    bool first = true;
    while (ss >> word)
    {
        reverse(word.begin(), word.end()); // Reverse the word
        if (!first)
            cout << " "; // print space if it’s not the first word
        cout << word;
        first = false;
    }

    cout << endl;
    return 0;
}
