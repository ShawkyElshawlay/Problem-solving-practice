/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
#define all(x) x.begin(), x.end()
int solve()
{
    ll n;
    cin>>n;
    map<string, ll>str;
    ll ans =0 ;
    ll curr = 0;
    for(int i=0; i<n; i++)
    {
        char c ;
        string s ;
        cin>>c>>s;
        if(c=='+')
        {
            if(str[s]==0)
                curr++;
            str[s]=1;
        }
        else
        {
            if(str[s])
                curr--;
            else
                ans++;
            str[s] = 0;
        }
        ans=max(ans,curr);
    }
    cout<<ans;
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;

}

