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
    string s;
    cin >> n >> s;

    bool lucky = true;
    int diff(0);
    n /= 2;
    for (ll i = 0; i < n; ++i)
    {
        if ((s[i] != '4' && s[i] != '7') || (s[n+i] != '4' && s[n+i] !='7'))
        {
            lucky = false;
            break;
        }
        diff += (s[i] - s[n+i]);
    }
    lucky = lucky && (diff == 0);
    cout << (lucky ? "YES" : "NO") << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}


