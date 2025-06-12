#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    reverse(a, a + N);

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}