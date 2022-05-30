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

const string subseqs[] = { "00", "25", "50", "75" };

const int INF = 100;

int solve(string& st, string& t)
{
    int sptr = st.length() - 1;

    int ans = 0;
    while (sptr >= 0 && st[sptr] != t[1])
    {
        sptr--;
        ans++;
    }

    if (sptr < 0) return INF;

    sptr--;

    while (sptr >= 0 && st[sptr] != t[0])
    {
        sptr--;
        ans++;
    }

    return sptr < 0 ? INF : ans;
}

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        int ans = INF;
        for (auto e : subseqs)
            ans = min(ans, solve(n, e));

        cout << ans << '\n';
    }
    return 0;
}

