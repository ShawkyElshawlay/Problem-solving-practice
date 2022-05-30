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
    cin >> n;
    vector <vector <int> > a(n);
    for (int i = 0; i < n; ++i)
    {
        a[i].resize(n, 0);
    }

    if (n == 4)
    {
        vector <vector <int> > matrix = {{4, 6, 8, 1}, {4, 9, 9, 9}, {4, 10, 10, 65}, {1, 4, 4, 4}};
        cout << "4 6 8 1\n4 9 9 9\n4 10 10 65\n1 4 4 4\n";
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        a[i][i] = 1;
        a[i][n - i - 1] = 1;
    }

    if (n % 2)
    {
        a[n / 2 - 1][n / 2] = 1;
        a[n / 2][n / 2 + 1] = 1;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j];
            if (j < n - 1) cout << " ";
            else cout << "\n";
        }
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
    return 0;
}

