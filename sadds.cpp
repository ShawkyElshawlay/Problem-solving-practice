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
#define BIG  1000000007
vi luck;
void push_luck (long long num)
{
    if (num > BIG)
        return ;

    if (num)
        luck.push_back(num) ;

    push_luck(num * 10 + 4) ;
    push_luck(num * 10 + 7) ;
}
int solve()
{
     int N ;

    cin >> N ;

    push_luck(0) ;

    sort(luck.begin() , luck.end()) ;

    for (int i = 0 ; i < int (luck.size()) ; i++)
    {
        if (luck [i] == N)
        {
            printf("%d" , i + 1) ;
            return 0 ;
        }
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}


