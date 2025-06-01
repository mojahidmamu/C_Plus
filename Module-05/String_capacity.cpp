#include <bits/stdc++.h>
using namespace std;
int main()
{
    // s.size() -> returns the size of the string.
    string s = "Mojahid";
    // cout << s.size() << endl;  
    // cout << s.max_size() << endl; 
    // cout << s.capacity() << endl; 
    // s.clear();
    // cout << s;
    cout  << s.empty() << endl;
    s.resize(4); // first 4 letter/character
    cout << s << endl;
    return 0;
}
