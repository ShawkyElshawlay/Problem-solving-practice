/*
 ██████████████████████████████████████████████████████████████
██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
██▒▒▒Shawky faried Shawky▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
  ██████████████████████████████████████████████████████████████
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define clr(v, d)		memset(v, d, sizeof(v))
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

int n, m, x, y;

// n - dotsCount[i] = # of hashes
int dotsCount[1000+9];			// +9 for safety and little thinking
int memo[1000+9][1000+9][3];	// 3: 0 (dots), 1 (hashes), 2 (nothing)

// 0-1 style with restrictions on # of connectives of same value
int solve(int col, int wid, int last)
{
    if(col == m)
    {
        // Make sure invalid states to invalidated
        if(wid < x || wid > y)
            return 100000000;
        return 0;	// we are done
    }

    int &ans = memo[col][wid][last];

    if(ans != -1)
        return ans;

    int dots = 100000000;	// max answer is 1000x1000
    // nothing before or bigger block is valid or old block is allowed
    if(col == 0 || (last == 0 && wid+1 <= y) || (last == 1 && wid >= x))
        dots = n - dotsCount[col] + solve(col+1, (last == 0) ? wid + 1 : 1, 0);

    int hashes = 100000000;
    if(col == 0 || (last == 1 && wid+1 <= y) || (last == 0 && wid >= x))
        hashes = dotsCount[col] + solve(col+1, (last == 1) ? wid + 1 : 1, 1);

    ans = min(dots, hashes);

    return ans;
}
// Your turn: Convert to tabulation style

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>x>>y;

    // read and accumulate each column
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            char ch;
            cin>>ch;

            if(ch == '.')
                dotsCount[j]++;
        }
    }

    clr(memo, -1);
    cout<<solve(0, 0, 2);

    return 0;
}
