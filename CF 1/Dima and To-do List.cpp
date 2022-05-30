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
    int n,k;
    cin>>n>>k;
    deque<int>d(n);
    for(int i=0;i<n;i++)cin>>d[i];
    int mn=1e9,ans=0;
    for(int j=0;j<k;j++)
    {
        int x=0;
        for(int i=0;i<n;i+=k)x+=d[i];
        if(x<mn)
        {
            mn=x;
            ans=j+1;
        }
        d.push_back(d.front());
        d.pop_front();
    }
    cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}


