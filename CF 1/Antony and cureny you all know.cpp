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

bool even(char c)
{
    return ((c=='0')||(c=='2')||(c=='4')||(c=='6')||(c=='8'));
}
int  solve()
{
    string st ;
    cin>>st;
    int n =st.size();
    for(int i=0; i<n-1; i++)
    {
        if(!even( st[i]))
            continue;
        if(st[i]>st[n-1])
            continue;
        swap(st[i],st[n-1]);
        cout<<st<<endl;
        return 0;
    }
    for(int i=(n-2);i>=0;i--)
	{
		if(!even(st[i])) continue;
		swap(st[i],st[n-1]);
		cout << st << endl;
		return 0;
	}
	cout << -1 << endl;

}
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
