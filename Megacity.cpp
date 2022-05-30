/**
      ||BY.Shawky faried shawky ||
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
double area,r ;
void solve()
{
    int m,n,i,j,p;
    cin>>n>>m;
    vector<pair<double,int>>v;
    for(int i=0; i<n; i++)
    {
        double x,y;
        cin>>x>>y>>p;
        v.pb({sqrt(x*x+y*y),p});
    }
    sort(all(v));
    for(int i=0; i<n; i++)
    {
        if(m>=1000000)
            break;
        m+=v[i].second;
        r=v[i].first;
    }
    if(m>=1000000)
        printf("%.10llf\n", r);
    else cout<<-1<<endl;
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
