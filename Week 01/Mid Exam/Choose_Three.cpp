#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int N, S;
        cin >> N >> S;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool is_sum = false;

        for (int i = 0; i < N; i++)
        {
            if (is_sum == true)
            {
                break;
            }
            for (int j = i + 1; j < N; j++)
            {
                if (is_sum == true)
                {
                    break;
                }
                for (int k = j + 1; k < N; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        is_sum = true;
                        break;
                    }
                    else
                    {
                        is_sum = false;
                    }
                }
            }
        }

        if (is_sum == true)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}