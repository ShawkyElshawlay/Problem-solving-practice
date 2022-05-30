
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
   ll a , b ;
    cin>>a>>b;
    if(b==1)
    {
        cout<<"NO"<<'\n';
        return;
    }
    else
    {
        cout<<"YES"<<'\n';
        cout<<a<<" "<<a*b<<" "<< a*(b + 1)<<'\n';
    }

}
int32_t main()
{
    // c_p_c();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;cin>>tst;
    while(tst--)
        solve();
    return 0;
}
