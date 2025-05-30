#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;

    bool a = false;

    if (S == '>')
    {
        a = A > B;
    }
    else if (S == '<')
    {
        a = A < B;
    }
    else if (S == '=')
    {
        a = A == B;
    }

    if (a == true)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }

    return 0;
}