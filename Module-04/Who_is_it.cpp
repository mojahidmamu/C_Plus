#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int ID;
    string Name;
    string Section;
    int Total_marks;
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Student boy_1, boy_2, boy_3;

        cin >> boy_1.ID >> boy_1.Name >> boy_1.Section >> boy_1.Total_marks;
        cin >> boy_2.ID >> boy_2.Name >> boy_2.Section >> boy_2.Total_marks;
        cin >> boy_3.ID >> boy_3.Name >> boy_3.Section >> boy_3.Total_marks;

        Student topper = boy_1; // initiali
        if ((boy_2.Total_marks > topper.Total_marks) || (boy_2.Total_marks == topper.Total_marks && boy_2.ID < topper.ID))
        {
            topper = boy_2;
        }

        if ((boy_3.Total_marks > topper.Total_marks) || (boy_3.Total_marks == topper.Total_marks && boy_3.ID < topper.ID))
        {
            topper = boy_3;
        }

        cout << topper.ID << " " << topper.Name << " " << topper.Section << " " << topper.Total_marks << endl;
    }

    return 0;
}
// ACCEPTED::::