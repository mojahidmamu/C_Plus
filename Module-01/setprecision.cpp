#include<iostream>
#include<iomanip> // (input-output manipulation)
using namespace std;
int main ()
{
    int a = 32.141;
    cout << fixed << setprecision(2) << a << endl;
    return 0;
}
