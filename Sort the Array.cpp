#include<bits/stdc++.h>
using namespace std ;
bool isSorted(vector<int> &a, int n)
{
    bool ok = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            ok = 0;
            break;
        }
    }
    if (ok)
    {
        return true;
    }
    return false;
}
int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (isSorted(a, n))
    {
        cout << "yes" << "\n";
        cout << "1 1" << "\n";
    }
    else
    {
        int p = -1, q = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (p == -1 and a[i] > a[i + 1])
            {
                p = i;
            }
            if (p != -1 and a[i] < a[i + 1])
            {
                q = i;
                break;
            }
        }
        if (p != -1 and q == -1)
        {
            q = n - 1;
        }
        reverse(a.begin() + p, a.begin() + q + 1);
        if (isSorted(a, n))
        {
            cout << "yes" << "\n";
            cout << p + 1 << " " << q + 1 << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }
    return 0;
}
