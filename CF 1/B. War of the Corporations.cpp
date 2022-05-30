/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    string s,d;
    cin >> s >> d;

    int ans = 0;
    for(int i=0; i<s.size(); i++)
    {
        if((i+d.size()-1) < s.size())
        {
            bool ok = 1;
            // cout << i << " ";
            for(int j=i; j<i+d.size(); j++)
            {
                if(s[j] != d[j-i])
                {
                    ok = 0;
                    // cout << "fallo en pos " << j << " " << j-i << '\n';
                }
            }
            if(ok)
            {
                i = i + d.size()-1;
                ans++;
            }
        }
        else break;
    }
    cout << ans << '\n';
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
