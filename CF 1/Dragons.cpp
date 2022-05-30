#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    int s,l,count=0;
    cin>>s>>l;
    pair <int,int> a[1000];
    for(int i=0; i<l; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+l);
    for(int i=0; i<l; i++)
    {
        if(s<=a[i].first)
        {
            count++;
            break;
        }
        else
        {
            s=s+a[i].second;
        }
    }
    if(count>0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
