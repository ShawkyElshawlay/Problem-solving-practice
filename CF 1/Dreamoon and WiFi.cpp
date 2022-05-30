///Shawky Faried Shawky
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define all(v)		((v).begin()), ((v).end())
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


/*void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 */
int fact (int n)
{
    if(n==0 || n==1)
        return 1;

    else
        return n*fact(n-1);
}

int32_t main()
{

    int i,c=0,d=0,e=0,ans=0;
    string s1,s2;

    cin>>s1>>s2;

    for(i=0; s1[i]!='\0'; i++)
        s1[i] == '+' ? c++ : c--;

    for(i=0; s2[i]!='\0'; i++)
    {
        if(s2[i]=='+')
            d++;
        else if(s2[i]=='-')
            d--;
        else
            e++;
    }


    if(!e)
    {
        d == c ? cout<<"1.000000000000" : cout<<"0.000000000000";
    }

    else
    {

        i = e+(c-d);

        if(i%2 == 0 && i/2>=0 && i/2<=e)
        {
            ans=fact(e)/(fact(e-i/2)*fact(i/2));
            printf("%0.12f",double(ans)/double(pow(2,e)));
        }

        else
            cout<<"0.000000000000";
    }

    return 0;
}
