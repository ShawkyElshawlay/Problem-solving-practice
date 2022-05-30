#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int i,k,len;
    string str;

    while (cin >> str)
    {
        len = str.size();
        k = 0;

        for (i=0; i<len; i++)
        {
            if (str[i] == '0')
            {
                k = 1;
                str.erase (str.begin()+i);
                break;
            }
        }

        if (!k)
            str.erase (str.begin());

        cout << str << endl;
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

