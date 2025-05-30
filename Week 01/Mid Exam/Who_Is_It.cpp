#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int unique_id;
    char name[100];
    char sec[100];
    int total_mark;
};
int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        Student student_1, student_2, student_3;

        cin >> student_1.unique_id >> student_1.name >> student_1.sec >> student_1.total_mark;
        cin >> student_2.unique_id >> student_2.name >> student_2.sec >> student_2.total_mark;
        cin >> student_3.unique_id >> student_3.name >> student_3.sec >> student_3.total_mark;

        int number = max({student_1.total_mark, student_2.total_mark, student_3.total_mark});
        if (student_1.total_mark == number)
        {
            cout << student_1.unique_id << " " << student_1.name << " " << student_1.sec << " " << student_1.total_mark << endl;
        }
        else if (student_2.total_mark == number)
        {
            cout << student_2.unique_id << " " << student_2.name << " " << student_2.sec << " " << student_2.total_mark << endl;
        }
        else if (student_3.total_mark == number)
        {
            cout << student_3.unique_id << " " << student_3.name << " " << student_3.sec << " " << student_3.total_mark << endl;
        }
    }

    return 0;
}