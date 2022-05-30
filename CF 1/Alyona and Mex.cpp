/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
int a[N];

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);

    int num = 1;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] < num)
        {
            //
        }
        else
        {
            num++;
        }
    }

    cout << num << '\n';

    return 0;
}
