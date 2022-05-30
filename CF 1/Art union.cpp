/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
#define all(x) x.begin(), x.end()

void solve()
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }

    }

    int p[n+1]= {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tm=p[j];
            int t2=p[j+1];
            int x=max(tm,t2);
            p[j+1]=x+arr[i][j];
        }
        cout<<p[n]<<" ";

    }

}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
