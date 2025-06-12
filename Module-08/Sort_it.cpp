#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_makrs;
    int english_makrs;
};

bool cmp(Student l, Student r)
{
    if (l.math_makrs + l.english_makrs > r.math_makrs + r.english_makrs)
    {
        return true;
    }
    else if (l.math_makrs + l.english_makrs == r.math_makrs + r.english_makrs)
    {
        if (l.id < r.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].math_makrs >> arr[i].english_makrs;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_makrs << " " << arr[i].english_makrs << endl;
    }

    return 0;
}
