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

void solve()
{
    ll n;
    cin>>n;
    ll a[n+5], mn=1e10, sum=0;
    for (ll i=1; i<=n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        if (a[i]%2==1)
            mn=min(mn, a[i]);
    }
    if (sum%2==1)
        cout<<sum;
    else
     cout<<max(sum-mn, 0LL);

}
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}


