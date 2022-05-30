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
vpi g[102];
bool b[102];

void dfs(int x, int c)
{
    for (pi i : g[x])
    {
        if (b[i.first] == 0 && i.second == c)
        {
            b[i.first] = 1;
            dfs(i.first, c);
        }
    }
}
void solve()
{
    int n, m, q, u, v, w;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    cin >> q;
    while (q--)
    {
        cin >> u >> v;
        int z = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++) b[j] = 0;
            b[u] = 1;
            dfs(u, i);
            if (b[v] == 1) z++;
        }
        cout << z << '\n';
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

