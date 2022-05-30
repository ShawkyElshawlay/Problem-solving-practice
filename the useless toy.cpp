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
     ll i,j,k;
    ll n,m;
    char ch1,ch2;

    cin>>ch1>>ch2;
    cin>>n;

    n=n%4;

    string s="v<^>";

    char cw,ccw;
    for(i=0;i<4;i++)
    {
        if(s[i]==ch1)
        {
            j=i;break;
        }
    }
    i=j;k=n;
    while(k--)
    {
        i++;
        i=i%4;
    }

    cw=s[i];

    //ccw
    i=j;k=n;
    while(k--)
    {
        i--;

        if(i<0)
            i=3;
    }
    ccw=s[i];

    if(cw==ccw)
        cout<<"undefined";
    else if(cw==ch2)
        cout<<"cw";
    else if(ccw==ch2)
        cout<<"ccw";
    else
        cout<<"undefined";
}
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

