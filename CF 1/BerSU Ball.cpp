/**
      ||BY.Shawky faried shawky ||
*/

#include "bits/stdc++.h"
using namespace std;
#define fi first
#define se second
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rev(i, n) for (int i = (int)(n - 1); i >= 0; --i)
#define fr(x, a) for (auto& x : a)
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end()

using ii = pair<int, int>;
using ll = pair<long, long>;
using vi = vector<int>;
using vii = vector<ii>;

template<class T> istream& operator >>(istream& i, vector<T>& a) { fr(x, a) i >> x; return i; }
template<class T> ostream& operator <<(ostream& o, vector<T>& a) { fr(x, a) o << x << ' '; return o; }
template<class T> bool setmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
template<class T> bool setmin(T& a, const T& b) { return a > b ? a = b, 1 : 0; }

const int maxN = 1e5 + 5;
const long double PI = acos(-1);

void Solve() {
    int n; cin >> n;
    vii a(n); fr(x, a) cin >> x.fi >> x.se;

    vector<pair<long double, int>> b;
    rep(i, n) {
        int x = a[i].fi, y = a[i].se;
        b.emplace_back(atan2l(y, x), i);
    }
    sort(all(b));
    //fr(x, b) cerr << x.fi << ' ';

    b.push_back(b[0]);
    long double ans = 1e9; int ans0, ans1;
    rep(i, n) {
        long double x = b[i + 1].fi - b[i].fi;
        if (x < 0) x += PI * 2; //cerr << x << ' ';
        if (x < ans) ans = x, ans0 = b[i].se, ans1 = b[i + 1].se;
    }
    cout << ans0 + 1 << ' ' << ans1 + 1;
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0);

    //int t; cin >> t; while (t--)
        Solve(), cout << '\n';
}
