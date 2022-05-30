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
    ll x1,p1,x2,p2;
    cin>>x1>>p1>>x2>>p2;
    if(p1==p2)
    {
        if(x1==x2)
        {
            cout<<"=\n";
            return;
        }
        else if(x1>x2)
        {
            cout<<">\n";
            return;
        }
        else
        {
            cout<<"<\n";
            return;
        }
    }
    else
    {
        while(x1<=100000)
        {
            if(p1==0)break;
            else
            {
                x1*=10;
                p1--;
            }
        }
        while(x2<=100000)
        {
            if(p2==0)break;
            else
            {
                x2*=10;
                p2--;
            }
        }
        if(p1>p2)
        {
            cout<<">\n";
            return;
        }
        else if(p2>p1)
        {
            cout<<"<\n";
            return;
        }
        else
        {
            if(x1==x2)
            {
                cout<<"=\n";
                return;
            }
            else if(x1>x2)
            {
                cout<<">\n";
                return;
            }
            else
            {
                cout<<"<\n";
                return;
            }
        }
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
        solve();
    return 0;
}

