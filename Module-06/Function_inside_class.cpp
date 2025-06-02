#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    Student(string name)
    {
        this->name = name;
    }
    void hello()
    {
        cout << "Hello from " << name << endl;
    }
}; 

int main()
{
    Student sakib("Shakib Ahmed");
    sakib.hello();
    Student Mojahid("Abdullah all Mojahid");
    Mojahid.hello();
    return 0;
}
