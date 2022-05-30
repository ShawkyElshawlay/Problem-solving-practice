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
    scanf("%d", &n);
    for (int i = 0; i < 3; ++i) scanf("%*s");
    char str[50];
    scanf("%s", str);
    for (int i = 0; i < 4 * n; i += 4)
    {
        if (str[i] == '*')
            putchar('2');
        else if (str[i + 1] == '*')
            putchar('1');
        else
            putchar('3');
    }
    putchar('\n');
}

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

