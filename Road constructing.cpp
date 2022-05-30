/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define all(x) x.begin(), x.end()
const int N = 1e3+10;
int forbidden[N][N];
void solve()
{




        int n,m;
        cin >> n >> m;

       vi cnt(n+1);
        for( int i=0 ; i<m ; i++ )
        {
            int x,y;
            cin >> x >> y;
            forbidden[x][y] = 1;
            forbidden[y][x] = 1;
            cnt[x]++;
            cnt[y]++;
        }

        int mn = n, node = -1;
        for( int i=1 ; i<=n ; i++ )
            if( mn>cnt[i] )
                mn = cnt[i], node = i;

        vector<pair<int, int>>ans;

        for( int i=1 ; i<=n ; i++ )
            if( i!=node and forbidden[i][node] == 0 )
                ans.push_back({i,node});


        cout << ans.size() << endl;
        for(auto [x,y] : ans )
            cout << x << ' ' << y << endl;
    }
    int main()
    {

        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        solve();
        return 0;
    }
