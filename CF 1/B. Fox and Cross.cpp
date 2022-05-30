/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x) (int)(x).size()

void solve()
{
    ll n,i,j,wall=0,flag=0;
    cin>>n;
    char a[n+1][n+1];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
            (a[i][j]=='#')?wall++:0;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i>0&&j>0&&i<n-1&&j<n-1)
            {
                if(a[i][j]=='#')
                {
                    if(a[i-1][j]=='#'&&a[i+1][j]=='#'&&a[i][j+1]=='#'&&a[i][j-1]=='#')
                    {
                        a[i-1][j]='?';
                        a[i][j]='?';
                        a[i+1][j]='?';
                        a[i][j-1]='?';
                        a[i][j+1]='?';
                    }
                }
            }
        }
    }
    if(wall==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]=='#')
                flag=1;
        }
    }
    cout<<((wall%5==0&&flag==0)?"YES":"NO");
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
