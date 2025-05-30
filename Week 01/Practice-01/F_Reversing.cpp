#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a[x];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = x - 1; j >= i; j--)
        {
            swap(a[i], a[j]);
            cout << a[i] << " ";
        }
    }

    return 0;
}