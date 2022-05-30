/**
      ||BY.Shawky faried shawky ||
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f ios_base::sync_with_stdio(false); cin.tie(NULL);

signed main()
{
    int m;
    cin>>m;
    int flag =0;
    if(m == 5)
    {
        vector<int> al[6];
        for(int i=0; i<5; i++)
        {
            int a,b;
            cin>>a>>b;
            al[a].push_back(b);
            al[b].push_back(a);
        }

        for(int i=1; i<6; i++)
        {
            //cout<<i<<" "<<al[i].size()<<endl;
            if(al[i].size() == 2)
                continue;
            else
            {
                flag++;
                break;
            }
        }
        if(flag == 1)
            flag =0;
        else
            flag =1;
    }
    if(flag == 0)
    {
        cout<<"WIN"<<endl;
    }
    else
        cout<<"FAIL"<<endl;
}
