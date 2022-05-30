#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m, x;
    cin >> n >> m >> x;
    vector<string> keyboard (n);
    vector<pair<int, int>> shifts;
    for(int i = 0; i < n; ++i)
    {
        cin >> keyboard[i];
        for(int j = 0; j < m; ++j)
        {
            if(keyboard[i][j] == 'S')
                shifts.push_back(make_pair(i, j));
        }
    }
    vector<int> dist (26, -1);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(islower(keyboard[i][j]))
            {
                if(dist[keyboard[i][j]-'a'] == -1)
                    dist[keyboard[i][j]-'a'] = INT_MAX;
                for(auto s : shifts)
                {
                    int d = (i-s.first)*(i-s.first) + (j-s.second)*(j-s.second);
                    dist[keyboard[i][j]-'a'] = min(dist[keyboard[i][j]-'a'], d);
                }
            }
        }
    }
    int q;
    string s;
    cin >> q >> s;
    int total = 0;
    for(char c : s)
    {
        if(dist[tolower(c)-'a'] == -1 || (isupper(c) && shifts.size() == 0))
        {
            total = -1;
            break;
        }
        total += isupper(c) && dist[tolower(c)-'a'] > x*x;
    }
    cout<<total<<"\n";
}
