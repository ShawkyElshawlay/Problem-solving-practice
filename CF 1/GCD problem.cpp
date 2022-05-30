/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
mt19937 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());
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
int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
int solve()
{
    ll n ;
    cin>>n;
    while(1)
    {
        int k = uniform_int_distribution<int>(2, n-2)(rng);
        int l = n-k-1;
        if(k != l && k != 1 && l != 1 && gcd(k, l) == 1)
        {
            cout << k << ' ' << l << ' ' << 1 << endl;
            break;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
        solve();
    return 0;
}

