#include <iostream>
using namespace std; // using namespace
int main()
{
    int a; // same: char, double, long long int etc....
    cin >> a; // same input all variables type...
    cout << "this number is: " << a << endl;
    char c = 'a';
    cout << (int)c << endl; // typecasting for ASCII value form char,
    char d = 97;
    cout << (char)d << endl; 
    return 0;
}