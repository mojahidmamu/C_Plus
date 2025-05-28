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
    Student rahim;
    rahim.roll = 60;
    rahim.gpa = 4.83;
    char temp[100] = "Rahim";
    strcpy(rahim.name, temp);

    Student karim;
    karim.roll = 60;
    karim.gpa = 4.83;
    char tem[100] = "Karim";
    strcpy(karim.name, tem);

    cout << rahim.name << " " << rahim.gpa << " " << rahim.roll << endl;
    cout << karim.name << " " << karim.gpa << " " << karim.roll << endl;
    return 0;
}
