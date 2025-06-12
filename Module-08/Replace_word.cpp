#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string sentence, target_str;
        cin >> sentence >> target_str;

        while (sentence.find(target_str) != string::npos)
        {
            sentence.replace(sentence.find(target_str), target_str.size(), "#");
        }

        cout << sentence << endl;
    }

    return 0;
}
// Accepted...