/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

void solve()
{
    int t,x1,y1,x2,y2;
    cin>>t>>x1>>y1>>x2>>y2;
    for (int j=1; j<=t; j++)
    {
        char ch;
        cin>>ch;
        if (x1<x2&&ch=='E')
            x1++;
        if (x1>x2&&ch=='W')
         x1--;
        if (y1<y2&&ch=='N')
         y1++;
        if (y1>y2&&ch=='S')
         y1--;
        if (x1==x2&&y1==y2)
        {
            cout<<j<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}



