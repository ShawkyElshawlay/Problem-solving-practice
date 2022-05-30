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
ll answer(ll x,ll y)
{
    ll mx =max(x,y);
    if(mx%2==0)
    {
        if(y==1)
            return mx*mx;
        else if(x<mx)
            return answer(mx,mx)-(mx-x);
        else if(x==mx)
            return (mx*mx-(y-1));
    }
    else
    {
        if(x==1)
            return mx*mx;
        else if(y<mx)
            return answer(mx,mx)-(mx-y);

        else if(y==mx)
            return  (mx*mx-(x-1));

    }
}
void solve()
{
    ll x ,y ;
    cin>>x>>y;
    cout<<answer(x,y)<<'\n';
}
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}


