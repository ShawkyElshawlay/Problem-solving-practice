#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void maxprod()
{
    int n, f; cin >> n >> f;
    vector<ll> k (n);
    vector<ll> l (n);
    vector<pair<ll, int>> d (n);
    for(int i = 0; i < n; ++i)
    {
        cin >> k[i] >> l[i];
        d[i] = make_pair(min(2*k[i], l[i])-min(k[i], l[i]), i);
    }
    sort(d.rbegin(), d.rend());
    vector<bool> sell (n);
    for(int i = 0; i < f; ++i)
    {
        sell[d[i].second] = true;
    }
    ll total = 0;
    for(int i = 0; i < n; ++i)
    {
        if(sell[i])
            total += min(2*k[i], l[i]);
        else
            total += min(k[i], l[i]);
    }
    cout<<total<<"\n";
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    maxprod();
}
