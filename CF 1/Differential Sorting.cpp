/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
// change these numbers
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;
/*void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 */

void solve()
{
   int n;
        cin >>n;
        ll a[n];
        for(int i=0;i<n;i++)
        cin >>a[i];
        if(a[n-1]>=a[n-2])
        {
            bool f=true;
            bool f1=false;
            bool f2=false;
            int s=a[n-1];
            int w=-1;
            for(int i=n-3;i>=0;i--)
            {
                if(a[i+2]>=0 && f1==false)
                {
                    f1=true;
                    w=i+2;
                }
                if(a[i]>a[i+1])
                {
                    if(!f1)
                        f=false;
                    f2=true;
                }
            }
            if(f)
            {
                if(f2)
                {
                    cout<<w-1<<"\n";
                    for(int i=0;i<w-1;i++)
                    {
                        cout<<i+1<<" "<<w<<" "<<w+1<<"\n";
                    }
                }
                else
                {
                    cout<<0<<"\n";
                }
            }
            else
            {
                cout<<-1<<"\n";
            }
        }
        else
        {
            cout<<-1<<"\n";
        }

}
int32_t main()
{
    // c_p_c();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
        solve();
}
