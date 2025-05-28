#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a, b;
    cin >> a.name >> a.roll >> a.gpa;
    cin >> b.name >> b.roll >> b.gpa;
    // a.roll = 60;
    // a.gpa = 4.83;
    // char temp[100] = "Mojahid";
    // strcpy(a.name, temp);

    cout << a.name << " " << a.gpa << " " << a.roll << endl;
    cout << b.name << " " << b.gpa << " " << b.roll << endl;
    return 0;
}
