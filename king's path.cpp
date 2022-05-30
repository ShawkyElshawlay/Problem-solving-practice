///Shawky Faried Shawky
#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define F first
#define S second
#define Lcm(a, b) (a * b) / __gcd(a, b)
#define LL long long
#define Matrix vector <vector <long long>>

using namespace std;


const int Mx = (int)2e6 + 7;
const int Md = (int)1e9 + 7;
const long long Inf = (long long)1e18 + 7;
const int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

map <pair <int, int>, int> Mu;
int xi, yi, xf, yf;
int n;

int main()
{

    cin >> xi >> yi >> xf >> yf;
    cin >> n;
    for(int i = 1, r, x, y; i <= n; i++)
    {
        cin >> r >> x >> y;
        for(int j = x; j <= y; j++)
        {
            Mu[ {r, j}] = -1;
        }
    }
    deque <pair <int, int>> q;
    q.pf({xi, yi});
    Mu[ {xi, yi}] = false;
    while(!q.empty())
    {
        pair <int, int> A = q.back();
        q.pop_back();
        for(int i = 0; i < 8; i++)
        {
            int x = A.F + dx[i], y = A.S + dy[i];
            if(Mu[ {x, y}] == -1)
            {
                q.pf({x, y});
                Mu[ {x, y}] = Mu[ {A.F, A.S}] + 1;
            }
        }
    }
    cout << Mu[ {xf, yf}] << '\n';
}
