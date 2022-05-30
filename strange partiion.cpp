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
ll n , x  , c ;
void solve()
{
    ll maxAns=0 , minAns=0 , sum =0 ;
   cin>>n>>x;
        vector<ll> a;
        for(ll i=0; i<n; i++){
            cin>>c;
            a.pb(c);
            sum += c;
            maxAns += c / x;
            if(c % x != 0)maxAns++;
        }
        minAns = (sum / x);
        if(sum % x != 0)
            minAns++;


        cout<<minAns<<" "<<maxAns<<endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;cin>>tst;
    while(tst--)
        solve();
    return 0;
}

