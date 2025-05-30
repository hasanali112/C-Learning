#include <bits/stdc++.h>
using namespace std;
int main()
{
    char S[100001];

    while (cin.getline(S, 100001))
    {
        int str_len = strlen(S);
        sort(S, S + str_len);
        for (int i = 0; i < str_len; i++)
        {
            if (S[i] >= 'a' && S[i] <= 'z')
            {
                cout << S[i];
            }
        }
        cout << endl;
    }

    return 0;
}