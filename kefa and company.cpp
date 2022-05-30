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
    ll n, d ;
    cin>>n>>d;
    vpl friends(n);
    for(int i=0; i<n; i++)
        cin>>friends[i].f>>friends[i].s;
    sort(all(friends));
    ll sum=friends[0].s ;
    ll ans = sum ;
    int r =0;
    for(int l=0; l<n; l++)
    {
        while (r + 1 < n && friends[r + 1].f < friends[l].f + d)
        {
            r++;
            sum += friends[r].s;
            ans = max(ans, sum);
        }
        sum -= friends[l].s;
    }
    cout<<ans;
}
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

