#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    string X;
    getline(cin, S); // input the sentence
    cin >> X;        // input the word

    stringstream ss(S);
    string word;

    int count = 0;
    while (ss >> word)
    {
        if (word == X)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
