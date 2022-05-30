/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
#include<numeric>
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
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long num, denum;
    if (a*d < b*c)
    {
        num = b*c - a*d;
        denum = b * c;
    }
    else
    {
        num = a*d - b*c;
        denum = a * d;
    }

    int gcd = std::gcd(num, denum);
    num /= gcd;
    denum /= gcd;

    cout << num << '/' << denum;
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

