#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r) // compare function
{
    // if (l.marks > r.marks) // for decreasing
    if (l.marks < r.marks) // for inreasing
    {
        return true;
    }
    else
    {
        return false;
    }
    // return l.marks < r.marks; // short-cut of if-else condition
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    sort(arr, arr + n, cmp); // custom compare function

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}
