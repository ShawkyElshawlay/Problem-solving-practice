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
    int n;
    cin >> n;
    vi a(n);
    for (auto &i : a)
        cin >> i;
    long long sum = 0, target = 0;
    for (int i = 0; i < n; ++i) {
        target += i;
        sum += a[i];
        if (sum < target) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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

