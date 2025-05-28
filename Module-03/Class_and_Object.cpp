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
    Student a;
    a.roll = 60;
    a.gpa = 4.83;
    char temp[100] = "Mojahid";
    strcpy(a.name, temp);

    cout << a.name << " " << a.gpa << " " << a.roll << endl;
    return 0;
}
