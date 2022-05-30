/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n , m;
    cin>>n>>m;
     if(n == 1 && m == 1){
            cout << "0"<<'\n';
        }
        else if(min(n, m) == 1){
            cout << "1"<<'\n';
        }
        else cout << "2"<<'\n';
}
int main()
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
