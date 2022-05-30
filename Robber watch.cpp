/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
const int maxn = 7;
bool f[maxn];
int g[maxn], n, m, nn, mm;
long long ans = 0;
void init()
{
    memset(f, false, sizeof(f));
    g[0] = 1;
    for (int i = 1; i < maxn; i ++)
        g[i] = g[i-1] * 7;
}
int chk(int n)
{
    if (n == 1)
        return 1;
    n -= 1;
    int cnt = 0;
    while (n)
    {
        n /= 7;
        cnt ++;
    }
    return cnt;
}
void dfs_m(int tmp, int tm)
{
    if (tmp >= m) return;
    if (tm < 0)
    {
        ans ++;
        return;
    }
    for (int i = 0; i < maxn; i ++)
    {
        if (f[i] == false)
        {
            f[i] = true;
            dfs_m(tmp + i * g[tm], tm-1);
            f[i] = false;
        }
    }
}
void dfs_n(int tmp, int tn)
{
    if (tmp >= n) return;
    if (tn < 0)
    {
        dfs_m(0, mm-1);
        return;
    }
    for (int i = 0; i < maxn; i ++)
    {
        if (f[i] == false)
        {
            f[i] = true;
            dfs_n(tmp + i * g[tn], tn-1);
            f[i] = false;
        }
    }
}

int main()
{
    scanf("%d%d", &n, &m);
    init();
    if (n > m) swap(n, m);
    nn = chk(n);
    mm = chk(m);
    if (nn + mm > 7)
    {
        puts("0");
        return 0;
    }
    dfs_n(0, nn-1);
    cout << ans << endl;
    return 0;
}
