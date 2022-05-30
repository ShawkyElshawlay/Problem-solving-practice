/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


typedef vector<int> vi;
#define sz(x) (int)(x).size()



void solve()
{
    int n , sum=0;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n==0)
        cout<<n<<endl;
    else
        cout<<n-1<<endl;
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
