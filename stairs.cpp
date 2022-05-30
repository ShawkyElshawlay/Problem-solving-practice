
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
/*void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 */
int solve()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++) cin>>a[i];
    sort(a,a+m);
    if(a[0]==1 || a[m-1]==n)
    {
        cout<<"NO";
        return 0;
    }
    int f=0;
    for(int i=1; i<m-1; i++)
    {
        if(a[i]-a[i-1]==1 && a[i+1]-a[i]==1)
            f=1;
    }
    if(f)
        cout<<"NO";
    else
        cout<<"YES";
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
