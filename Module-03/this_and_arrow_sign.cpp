#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    // char name[100];
    int roll;
    double gpa;

    Student(int r, double g) // constructor: no return type, name as if class name..
    {
        roll = r;
        gpa = g;
    }
};

int main()
{
    Student rahim(45, 3.56);
    // rahim.roll = 60;
    // rahim.gpa = 4.83;
    // char temp[100] = "Rahim";
    // strcpy(rahim.name, temp);

    Student karim(50, 4.86);
    // karim.roll = 60;
    // karim.gpa = 4.83;
    // char tem[100] = "Karim";
    // strcpy(karim.name, tem);

    cout << rahim.gpa << " " << rahim.roll << endl;
    cout << karim.gpa << " " << karim.roll << endl;
    return 0;
}
