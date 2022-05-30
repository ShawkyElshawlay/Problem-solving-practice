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

int32_t main()
{
    // c_p_c();

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t1,t2,k,a,b;
    double c1,c2;
    vector<pair<double,int> >v;
    cin>>n>>t1>>t2>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        c1=(a*t1)-(double(a*t1*k)/100)+(b*t2);
        c2=(b*t1)-(double(b*t1*k)/100)+(a*t2);
        v.push_back(make_pair(-1*max(c1,c2),i));
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
        cout<<v[i].second<<" "<<fixed<<setprecision(2)<<-1*v[i].first<<endl;
    return 0;
}
