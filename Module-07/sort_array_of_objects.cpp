#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    int mx= INT_MIN; // for maximum
    //  int minimum = INT_MAX; // for minimum
    for (int i = 0; i < n; i++)
    {
         mx = max(arr[i].marks, mx); // for maximum
        //  minimum = min(arr[i].marks, minimum); //for minimum
    }
    cout << " Maximum marks is: " <<  mx << endl; // for maximum
    // cout << " Minimum marks is: " <<  minimum << endl; // for minimum

    return 0;
}
