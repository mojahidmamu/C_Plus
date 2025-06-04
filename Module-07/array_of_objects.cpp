#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    // Student(string name, int roll, int makrs)
    // {
    //     string name = name ;
    //     int roll = roll;
    //     int marks = marks;
    // }
};
int main()
{
    // int a[10]
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        // cin.ignore(); // for ignore gurbase value.......
        // getline(cin, arr[i].name) // this is only for input string with space
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << " ";
    }

    return 0;
}
