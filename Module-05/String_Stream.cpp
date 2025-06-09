// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     cout << s << endl;
 
//     stringstream ss(s);
//     string word;
//     ss >> word;
//     cout << word << endl;
//      ss >> word;
//     cout << word << endl;
//      ss >> word;
//     cout << word << endl;
//      ss >> word;
//     cout << word << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input = "123 456 789";
    stringstream ss(input);

    int a, b , c;
    ss >> a >> b >> c;

    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;
  
    return 0;
}
