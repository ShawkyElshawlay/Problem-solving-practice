/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define all(x) x.begin(), x.end()

void solve()
{
    string s;
    cin>>s;
    int ans=0;
    while(s.size()>1)
    {
        if(s.back()=='1')
        {
            int i;
            for(i=s.size()-1; i>=0 and s[i]=='1'; i--)
            {
                s[i]='0';
            }
            if(i==-1)
            {
                s="1"+s;
            }
            else
            {
                s[i]='1';
            }
        }
        else
        {
            s.pop_back();
        }
        ans++;
    }
    cout<<ans<<endl;
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

