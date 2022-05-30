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
    int n ;
    cin>>n ;
    for(int i=2 ; i<n+1;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cout<<n<<" ";
                n/=i;
            }
        }
    }
    cout<<1;
    return 0;
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);N
    solve();
    return 0;

}
