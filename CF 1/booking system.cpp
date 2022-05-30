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
bool cmp(pair<pair<int, int> , int>& a, pair<pair<int, int>, int>& b)
{
    return a.first.second > b.first.second;
}
 void solve()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> a(n, { {0, 0 }, 0 });
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = i;
    }
    int k;
    cin >> k;
    vector<pair<int, int>> s(k, { 0 , 0});
    vector<bool> used(k, false);
    for (int i = 0; i < k; ++i)
    {
        cin >> s[i].first;
        s[i].second = i;
    }
    sort(all(s));
    sort(all(a), cmp);
    vector<pair<int, int>> result;
    long long resSum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < k; ++j)
        {
            if (!used[j])
            {
                if (s[j].first >= a[i].first.first)
                {
                    result.push_back({a[i].second+1 , s[j].second+1 });
                    resSum += a[i].first.second;
                    used[j] = true;
                    break;
                }
            }
        }
    }
    cout << result.size() << " " << resSum << "\n";
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i].first << " " << result[i].second << "\n";
    }

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

