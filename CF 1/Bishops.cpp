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



map<int,int>g1,g2;
void solve(){
ll n,u,v,ans=0;
map<int,int>g1,g2;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>u>>v;
    ans+=g1[u+v],g1[u+v]++;
    ans+=g2[u-v],g2[u-v]++;
}
    cout<<ans;
}
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;

}
