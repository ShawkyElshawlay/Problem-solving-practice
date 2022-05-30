/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x) (int)(x).size()

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    map<char, char> brand;
    for (char c = 'a'; c <= 'z'; ++c)
        brand[c] = c;
    for (int i = 0; i < m; ++i) {
        char x, y;
        cin >> x >> y;
        if (x != y) {
            for (auto& p : brand)
                if (p.second == x)
                    p.second = y;
                else if (p.second == y)
                    p.second = x;
        }
    }
    for (char& c : s)
        c = brand[c];
    cout << s << '\n';
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

