#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    Student rahim(45, 3, 5.6);
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    return 0;
}