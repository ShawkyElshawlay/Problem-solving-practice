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
    string st ;
    int n, ans =0;
    cin>>st;
    cin>>n;
    int value[26];
    for(int i=0; i<26; ++i)
        cin>>value[i];

    for(int i=0; i<st.size(); ++i)
        ans+=(value[st[i]-'a']*(i+1));

    sort(value,value+26);
    int mx=value[25];

    for(int i=0; i<n; ++i)
        ans+=(mx*(st.size()+i+1));
    cout<<ans<<endl;

}
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

