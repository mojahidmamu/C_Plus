#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;

        // cout << fixed << setprecision(3) << a;

    // cout << max(a, b) << endl; // max & min with build-in-function
    // cout << min(a, b) << endl;

    // swap(a, b);
    // cout <<  a << endl << a ;

 

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    std::swap(a, b);  // Built-in swap function

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    // while (cin >> a)
    // {
    //     cout << a << endl;
    // }

    return 0;
}