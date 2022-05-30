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
    string s;
    cin>>s;
    ll i;
    ll j=-1;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='2')
        {
            j=i;
            break;
        }
    }
    if(j==-1)
    {
        sort(all(s));
        cout<<s<<"\n";
        return;
    }
    string s2;
    for(i=0; i<j; i++)
        s2.pb(s[i]);
    for(i=j+1; i<s.length(); i++)
    {
        if(s[i]=='1')
            s2.pb(s[i]);
    }
    sort(all(s2));
    for(i=j; i<s.length(); i++)
    {
        if(s[i]!='1')
            s2.pb(s[i]);
    }
    cout<<s2<<"\n";

}
int32_t main()
{
    // c_p_c();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

