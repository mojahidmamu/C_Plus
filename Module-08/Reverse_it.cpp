#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id;
    }

    // reverse(arr->section, arr->section + n); 
    int i = 0, j = n-1;
    while (i < j)
    {
        int temp = arr[i].section;
        arr[i].section = arr[j].section;
        arr[j].section = temp;
        i++;
        j--;
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << endl;
    }

    return 0;
}
