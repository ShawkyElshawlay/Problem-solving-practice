/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()


int  solve()
{
    int n,l,r,x;
    cin >> n >> l >> r >> x;

    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    int ans=0;
    for(int i=0; i<(1<<n); i++)
    {
        if(__builtin_popcount(i)>=2)
        {
            int sum=0;
            vector<int> v;
            for(int j=0; j<n; j++) if(i&(1<<j)) v.pb(a[j]),sum+=a[j];

            int f1=*min_element(v.begin(),v.end()),f2=*max_element(v.begin(),v.end());
            if(f2-f1>=x && sum>=l && sum<=r) ans++;
        }
    }

    cout << ans;

}
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

