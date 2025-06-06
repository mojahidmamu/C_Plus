#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin >> s;// is not for a sentence...
    getline(cin, s); // for a sentence

    // int len = s.size();
    // cout << len << endl;
    // insert: function
    // cout << s.front() << endl;
    // replace: function
    // erase: function
    // s.erase();
    // s.find("gram");

    // for (int i = 0; i < len; i++)
    // {
    //     cout << s[i] << " ";
    // }

    stringstream ss(s);
    string word;
    
    ss >> word;

    cout << word << endl;

    return 0;
}
