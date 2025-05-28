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

    Student(int r, double g) 
    {
        roll = r;
        gpa = g;
    }
};

int main()
{
    Student rahim(45, 3.56);
    cout << rahim.gpa << " " << rahim.roll << endl;
    
    return 0;
}
