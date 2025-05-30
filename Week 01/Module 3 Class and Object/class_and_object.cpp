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
    a.roll = 10;
    a.gpa = 4.50;
    char nam[100] = "Rakib";
    strcpy(a.name, nam);
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}