/*
Shawky Faried Shawky
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define all(v)		((v).begin()), ((v).end())
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


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
    int n,m;
    int ans = 0;
    cin >> n >> m;
    pair<int, int>a;
    cin >> a.ff >> a.ss;
    int k;
    cin >> k;
    while (k--)
    {
        int b,c;
        cin >> b >> c;
        long x = 1000000000, y =1000000000;

        if (b > 0) x = (n-a.ff)/b;
        else if (b < 0) x = (a.ff-1)/(-b);

        if (c > 0) y = (m-a.ss)/c;
        else if (c < 0) y = (a.ss-1)/(-c);

        long d = 0;
        if (x > 0 and y > 0) d = min(x,y);
        a.ff += (d*b);
        a.ss += (d*c);
        ans += d;
    }
    cout << ans;
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
