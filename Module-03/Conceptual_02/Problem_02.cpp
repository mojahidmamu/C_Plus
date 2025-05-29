#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;
};

int
main()
{
    Cricketer *dhoni = new Cricketer; // dynamic

    dhoni->jersey_no = 7;
    dhoni->country = "India";

    Cricketer *kohli = new Cricketer;
    //  kohli = dhoni; // print to dhoni object

    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    delete dhoni;

    cout << "Kohli " << kohli->jersey_no << " " << kohli->country << endl;


    return 0;
}
