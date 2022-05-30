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
    int n, m,c,d;
    cin>>n>>m;
    char Grid[n][m];
    for(int i =0 ; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>Grid[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        bool G=0;
        for(int j=0; j<m; j++)
        {
            if(Grid[i][j]=='S'&&G==0)
            {
                cout<<-1<<endl;
                return 0;
            }
            else if(Grid[i][j]=='G')
            {
                G=1;
            }
        }
    }

    set<int>fin;
    for(int i =0 ; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(Grid[i][j]=='G')
                d=j;
            else if(Grid[i][j]=='S')
                c=j;
        }
        fin.insert(c-d)  ;
    }

    cout<<fin.size()<<endl;
    return 0;
}
